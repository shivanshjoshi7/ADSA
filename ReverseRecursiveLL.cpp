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

void printrec(node* head)
{
	if(head==NULL)
		return;
	cout<<head->data<<" ";
	printrec(head->next);
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

node* reverseRecLL(node* head)
{
	node* p;
	if(head==NULL || head->next==NULL)
	{
		p=head;
		return p;
	}

	p=reverseRecLL(head->next);
	node* q=head->next;
	q->next=head;
	head->next=NULL;

	return p;
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
	}
	//printrec(head);
	//cout<<endl;
	head=reverseRecLL(head);
	printrec(head);

	return 0;
}