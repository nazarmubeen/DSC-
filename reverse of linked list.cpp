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
		void reverse()
		{
			struct node * current=head;
			struct node * prev=NULL;
			struct node * next;
			
			while(current !=NULL)
			{
				next=current->next;
				current->next=prev;
				prev=current;
				current=next;
				
				
				
				
				
			}
				head=prev;
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
	reverse();
	
	print();
	
	
}
