#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

node* insertend(node* head, int value)
{
	node* temp=new node();
	temp->data=value;
	temp->next=NULL;

	node* temp1=head;
	if(head==NULL)
	{
		head=temp;
		return head;
	}
	
	while(temp1->next!=NULL)
			temp1=temp1->next;
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
	int value;
	for(int i=0; i<n; i++)
	{
		cin>>value;
		head=insertend(head, value);
		print(head);
	}

	return 0;
}