#include<iostream>
#include<stdlib.h>
#include<limits>
using namespace std;

struct stacknode {
	
	int data;
	struct stacknode * next;
	
	
};

struct stacknode * root=NULL;

struct stacknode * newnode(int data)
{
	struct stacknode * temp=new stacknode();
		temp->data=data;
		temp->next=NULL;
		return temp;	
}

int isEmpty()
{
	return !root;
	
}

void push(int data)
{
	struct stacknode * temp=new stacknode();
	temp->data=data;
	temp->next=root;
	root=temp;
	cout<<"pushed to stack"<<data<<endl;
	
	
}


int pop()
{
	if(isEmpty())
	return 0;
	struct stacknode * temp=root;
	root=temp->next;
	int popped=temp->data;
	free(temp);
	
	return popped;
	
}

int peek()
{
	if(isEmpty())
	return 0;
	
	return root->data;
	
	
}


int main()
{
    

    push(10);
    push(20);
    push(30);
	cout<<"topped element"<<peek()<<endl;
	cout<<"popped from stack"<<pop()<<endl; 
	cout<<"topped element"<<peek()<<endl;

    return 0;
}











