#include<iostream>
using namespace std;

struct node{
	
	int data;
	struct node * next;
	
	
};

struct node * head;

void push(int x)
{
	node * temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
}

void pop(int key)
{
	struct node * temp=head,* prev;
		if(temp==NULL)
		return;
		
		else if(temp!=NULL && temp->data==key)
		{
		head=temp->next;
		delete temp;
		return;	
		}
		
		else
		{
		
		while(temp!=NULL && temp->data!=key)
		{
			prev=temp;
			temp=temp->next;
			
		}
		
	
		
		prev->next=temp->next;
		delete temp;
	}
}
	
	void print()
	{
		struct node * temp=head;
		while(temp!=NULL)
		{
			
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		
	}
		
int main()
{
int n,x,y;
cout<<"enter no of elements";
cin>>n;	
	while(n--){
		cout<<"enter the data"<<endl;
		cin>>x;
		push(x);
	}
	cout<<"linked list data before deletion";
	print();
	
	cout<<"enter the item to pop";
	cin>>y;
	pop(y);
	cout<<"linked list data after deletion";
	print();
	
	
}
