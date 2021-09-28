#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

void insertlist(node** head, int value)
{
	node* temp=new node();
	(*temp).data=value;
	(*temp).next=NULL;

	node* temp1=*head;

	if(*head==NULL)
	{
		*head=temp;
		return;
	}
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;

}
void printlist(node** head)
{
	node* temp=*head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void reverselist(node** head,int n)
{
	node* p=NULL;
	node* q=*head;
	node* r;
	if(n<2)
		return;

	while(q!=NULL)
	{
		r=q->next;
		q->next=p;
		p=q;
		q=r;

	}
	*head=p;
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
		insertlist(&head,value);
	}
	//printlist(&head);
	reverselist(&head,n);
	printlist(&head);
}