#include<iostream>
using namespace std;

struct node{
	
	int data;
	struct node* next;	
	
};

struct node* head;

void push(int x)
{
	node * tmp=new node();
	tmp->data=x;
	tmp->next=head;
	head=tmp;
	
}

void pushloc(int l, int x){
	struct node * current=head;
	l--;
	while(l--)
	{
	
	current=current->next;
	}
	
	struct node* tmp=new node();
	tmp->data=x;
	tmp->next=current->next;
	current->next=tmp;
	
	
}
void print()
{	
	struct node * tmp=head;
	while(tmp!=NULL)
	{
	cout<<tmp->data<<endl;
		tmp=tmp->next;
		
	}
	
}
int main()
{
	int x,n,l;
	head=NULL;
	cout<<"enter the number of elements";
	cin>>n;
	while(n--)
	{
	
	cout<<"enter the data";
	cin>>x;
	
	push(x);
}
	print();
	
	cout<<"enter location";
	cin>>l;
		cout<<"enter the data";
	cin>>x;
	pushloc(l,x);
	
	print();

}
