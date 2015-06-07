#include<iostream>
using namespace std;

struct node {
	int data;
	struct node * left;
	struct node * right;	
};

int maxsize(struct node * root)
{	
	if(root==NULL)
	return 0;
	int a=maxsize(root->left);
	int b=maxsize(root->right);
	if(a>b)
	return a+1;
	else 
	return b+1;
		
}
