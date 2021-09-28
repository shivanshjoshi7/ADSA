#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

node* insertmid(node* head, int value, int position)
{
	node* temp=new node();
	temp->data=value;
	temp->next=NULL;

	node* temp1=head;
	if(position==1)
	{
		temp->next=head;
		head=temp;
		return head;
	}
	int count=0;
	while(count!=position-2)
	{
		temp1=temp1->next;
		count++;
	}	
	temp->next=temp1->next;
	temp1->next=temp;
	return head;
}

void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}	
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;

	node* head=NULL;
	int value,position;
	for(int i=0; i<n; i++)
	{
		cin>>value>>position;
		head=insertmid(head, value, position);
		print(head);
	}
	
	return 0;
}