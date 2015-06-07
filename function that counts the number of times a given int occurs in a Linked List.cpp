#include<iostream>
using namespace std;

struct node{
	
	int data;
	struct node * next;
	
	
};

struct node * head=NULL;

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



int count=0;

int count_number(int key)

{
	struct node * temp;
	temp=head;
	while(temp!=NULL)
	{
		
		if(temp->data==key)
		{
			count++;
		}
		
		temp=temp->next;
	}
	
	return count;
}



int main()
{
	int n,x,y,m;
	cout<<"enter no of elements";
	cin>>n;	
	while(n--){
		cout<<"enter the data"<<endl;
		cin>>x;
		push(x);
	
	}
	print();
	cout<<"enter the number to find its frequency of occurance"<<endl;
	cin>>m;
	y=count_number(m);
	cout<<"occured"<<y;
	return 0;
}


