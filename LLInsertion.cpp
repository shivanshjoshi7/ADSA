#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

node* insert(node* head, int value)
{
	//node* temp=(node*)malloc(sizeof(node));
	node* temp=new node();
	temp->data=value;
	temp->next=NULL;
	if(head!=NULL)
	{
		temp->next=head;
	}
	head=temp;
	return head;

}

void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<"\n";
}
int main()
{
	node* head=NULL;

	int n;
	cin>>n;

	int value;

	for(int i=0; i<n; i++)
	{
		cin>>value;
		head=insert(head,value);
		print(head);
	}

	return 0;

}