#include<iostream>
using namespace std;


struct node
{
	int data;
	struct node * left , *right;
	bool rightthread;
	
};

struct node * newnode( int data)
{
	struct node * mynode=new node();
	mynode->data=data;
	mynode->left=NULL;
	mynode->right=NULL;
	return mynode;
}

int identicaltrees (struct node *a, struct node *b)
{
	if(a==NULL && b==NULL)
	return 1;
	if(a!=NULL && b!=NULL)
	{
	
	return{
	a->data==b->data && identicaltrees(a->left,b->left) && identicaltrees(a->right,b->right)
	
	
	};
}
return 0;	
}


int main()
{
	struct node * root=newnode(1);
	struct node * root1=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->right->left=newnode(6);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
		root1->left=newnode(2);
	root1->right=newnode(3);
	root1->right->left=newnode(6);
	root1->left->left=newnode(4);
	root1->left->right=newnode(5);
	
	if(identicaltrees(root,root1))
	cout<<"identical trees";
	else
	cout<<"unidentical trees";
	
	return 0;
}
