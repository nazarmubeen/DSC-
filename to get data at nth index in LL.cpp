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


	void print()
	{
		struct node * temp=head;
		while(temp!=NULL)
		{
			
			cout<<temp->data<<endl;
			temp=temp->next;
		}
		
	}
		
		void nnode(int index)
		{
			struct node * temp=head;
		for(int i=0;i<=index-1;i++)
		{
			temp=temp->next;
		}
		
		cout<<"the data at this index is"<<endl;
		cout<<	temp->data;
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
	cout<<"linked list data";
	print();
	
	cout<<"enter the index for element";
	cin>>y;
	nnode(y);
	
	
	
}
