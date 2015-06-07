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
};

void printarray(int[],int);
void printpathsrecursion(struct node *, int[],int);
void printpaths(struct node * node)
{
	int path[1000];
	printpathsrecursion(node,path,0);	
}

void printpathsrecursion(struct node * node , int path[],int pathlen)
{
	if(node==NULL)return;
	path[pathlen]=node->data;
	pathlen++;
	if(node->left==NULL && node->right==NULL)
	{
		printarray(path,pathlen);
	}
	else
	{
		
	printpathsrecursion(node->left, path, pathlen);
    printpathsrecursion(node->right, path, pathlen);
	}
	
}

void printarray(int path[],int pathlen)
{
	
	int i;
	for(i=0;i<pathlen;i++)
	{
		cout<<path[i];
	}
	cout<<endl;
}


int main()
{
	struct node * root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->right->left=newnode(6);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	
	printpaths(root);
	
	return 0;
}
