#include<iostream>
using namespace std;


struct node
{
	int data;
	struct node * left , *right;
	bool rightthread;
	
}

struct node * newnode( int data)
{
	struct node * mynode=new node();
	mynode->data=data;
	mynode->left=NULL;
	mynode->right=NULL;
	return mynode;
};




int main()
{
	struct node * root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->right->left=newnode(6);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	
	
	
	return 0;
}
