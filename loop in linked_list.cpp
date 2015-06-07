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

int detect_loop()
{
	struct node *temp,* ptr1 ,*ptr2;
	ptr1=head;
	ptr2=head;
	
	while(ptr1 && ptr2 && ptr2->next)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
		
		if(ptr1==ptr2)
		{
			cout<<"loop found";
			return 1;
		}
	}
		return 0;
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
	head->next->next->next->next=head;
	detect_loop();
	
}


