#include<iostream>
using namespace std;
struct node{
	
	int data;
	struct node *next;
};

struct node * head;

void push(int x)
{
	struct node * temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
}

void print()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
		
	}
	
	
}


void nth_node(int nth )
{
	struct node *temp=head;
	int l=1;
	while(temp!=NULL)
	{
		temp=temp->next;
		l++;
		
	}	
	temp=head;
	nth=l-nth+1;
	
	while(nth--)
	{
	temp=temp->next;	
	}
	cout<<temp->data<<endl;
}

int main()
{
int n,x,en;
head=NULL;	
		cout<<"enter the number of records";
		cin>>n;
	while(n--)
	{
		cout<<"enter the value";
		cin>>x;
		push(x);
		
		
	}
	
	print();
	cout<<"enter the nth node from end";
	cin>>en;
	nth_node(en);
	return 0;
}

