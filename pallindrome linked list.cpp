#include<iostream>
using namespace std;

struct node{
	
	char data;
	struct node * next;
	
	
};

struct node * head=NULL;

void push(char x)
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

bool detect_pallindrome(struct node *left,struct node *right)
{
	
	if (right == NULL)
      return true;
 
   /* If sub-list is not palindrome then no need to
       check for current left and right, return false */
   bool isp = detect_pallindrome(left, right->next);
   if (isp == false)
      return false;
 
   /* Check values at current left and right */
   bool isp1 = (right->data == left->data);
 
   /* Move left to next node */
   left = left->next;
 
   return isp1;
}
	





int main()
{
	int n;
	char x;
	cout<<"enter no of elements";
	cin>>n;	
	while(n--){
		cout<<"enter the data"<<endl;
		cin>>x;
		push(x);
	
	}
	print();
	
	detect_pallindrome(head,head)?cout<<"ispallindrome":cout<<"notpallindrome";
	return 0;
}


