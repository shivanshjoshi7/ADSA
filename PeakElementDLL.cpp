#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* prev;
	struct node* next;
};

void insertDLL(node** head, int value)
{
	node* temp=new node;
	temp->data=value;
	temp->prev=NULL;
	temp->next=NULL;

	node* temp1=*head;

	if(*head==NULL)
	{
		*head=temp;
		return;
	}

	
	while(temp1->next!=NULL)
		temp1=temp1->next;

	temp1->next=temp;
	temp->prev=temp1;

}

void printDLL(node** head)
{
	node* temp=*head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;

}

void findPeakElement(node** head)
{
	node* temp=*head;

	temp=temp->next;
	int current_min=10e7;
	while(temp->next!=NULL)
	{
		if(temp->prev->data<temp->data && temp->next->data<temp->data)
		{
			current_min=min(current_min,temp->data);
		}
		temp=temp->next;
	}
	if(current_min==10e7)
		cout<<"No peak element exists"<<endl;
	else
		cout<<current_min<<endl;
}

int main()
{
	int n;
	cin>>n;

	int value;
	node* head1=NULL;
	for(int i=0; i<n; i++)
	{
		cin>>value;
		insertDLL(&head1,value);

	}
	
	printDLL(&head1);
	findPeakElement(&head1);
	
	return 0;
}