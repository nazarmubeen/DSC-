#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node * left , * right;
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

struct node *leftmost(struct node * n)
{
	if(n==NULL)
	return NULL;
	while(n->left!=NULL)
	{
		n=n->left;	
	}
	
	return n;
	
}

void inorder(struct node * root)
{
	
	struct node * cur=leftmost(root);
	while(cur!=NULL)
	{
		cout<<"thsi is cursor data"<<endl;
		cout<<cur->data;
		if(cur->rightthread)
		cur=cur->right;
		else
		cur=leftmost(cur->right);
		
	}
	
}



int main()
{
	struct node * root=newnode(1);
	
	root->left=newnode(2);
	root->right=newnode(3);
	root->right->left=newnode(6);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	cout<<"threded binary tree";

	
	inorder(root);
	

	return 0;
}
