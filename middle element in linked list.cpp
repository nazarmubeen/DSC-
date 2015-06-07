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
		void middle()
		{
			
			struct node * temp=head;
			int c=0;
			while(temp!=NULL)
			{
				temp=temp->next;
				c++;
			}
			int x=c/2;
			temp=head;
			while(x--)
			{	
				temp=temp->next;
			}
			
			cout<<"middle element";
			cout<<temp->data;
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
	
	cout<<"The middle of linked list is";
	
	middle();
	
	
}
