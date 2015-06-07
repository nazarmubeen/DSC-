#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node * left ,* right;
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

int size( struct node * root)
{
	
	if(root==NULL)
	return 0;
	return(size(root->left)+size(root->right)+1);
	

}

int maxdepth(struct node * root)
{
	if(root==NULL)
	return 0;
	
	
		int ldepth=maxdepth(root->left);
		int rdepth=maxdepth(root->right);

	if(ldepth>rdepth)
	return (ldepth+1);
	else
	return(rdepth+1);
}

int main()
{
	struct node * root=newnode(1);
	
	root->left=newnode(2);
	root->right=newnode(3);
	root->right->left=newnode(6);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	cout<<"size of tree tree"<<endl;
	int x=size(root);
	cout<<x;
	cout<<"Height of tree tree"<<endl;
	int y=maxdepth(root);
	cout<<y;
	
	
	return 0;
}
