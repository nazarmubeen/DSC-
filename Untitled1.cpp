#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node * next;
	
}


struct node * head=NULL;

class Llist
{
	int count;
	public:
	 void create();
	 void insert();
	 void del();
	 void traverse();
	 void modify();
	 void insertbegin();
	 void insertmiddle(int);
	 void insertend();
	 void deletebegin();
	 void deletemiddle();
	 void deleteend();
	 void search();
	
	Llist()
	{
		count=0;
	}
};
