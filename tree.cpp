#include<iostream>
using namespace std;

struct node{
	
	int data;
	struct node * left;
	struct node * right;
	
};


struct node *newnode(int data)
{
	struct node *mynode=new node();
	mynode->data=data;
	mynode->left=NULL;
	mynode->right=NULL;
	return mynode;	
}


/* printing node in post orde */


void printpostorder(struct node * node)
{
	if(node==NULL)
	return;
	printpostorder(node->left);
	printpostorder(node->right);
	cout<<"data"<<endl;
	cout<<node->data;
}

void printinorder(struct node *node)
{
	if(node==NULL)
	return;
	printinorder(node->left);
	cout<<"data"<<endl;
	cout<<node->data;
	printinorder(node->right);
}

void printpreorder(struct node *node)
{
	if(node==NULL)
	return;
	cout<<"data"<<endl;
	cout<<node->data;
	printpreorder(node->left);
	printpreorder(node->right);
}

int main()
{
     struct node *root  = newnode(1);
     root->left             = newnode(2);
     root->right           = newnode(3);
     root->left->left     = newnode(4);
     root->left->right   = newnode(5); 
 
     cout<<"\n Preorder traversal of binary tree is \n";
     printpreorder(root);
 
     cout<<"\n Inorder traversal of binary tree is \n";
     printinorder(root);  
 
     cout<<"\n Postorder traversal of binary tree is \n";
     printpostorder(root);
 
     return 0;
}





	


