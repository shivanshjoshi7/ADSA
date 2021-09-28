#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

node* insertnode(node* head, int value)
{
	node* temp=new node;
	temp->data=value;
	temp->next=NULL;

	if(head!=NULL)
		temp->next=head;
	head=temp;

	return head;

} 

node* deletenode(node* head, int position)
{
	node* temp=head;
	node* temp1=NULL;

	if(position==1)
	{
		head=temp->next;
		free(temp);
		//delete(temp);
		return head;
	}

	
	int count=0;
	while(count!=position-2)
	{
		temp=temp->next;
		count++;
	}
	temp1=temp->next;
	temp->next=temp1->next;
	free(temp1);
	//delete(temp1);
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
		head=insertnode(head,value);
		print(head);

		
	}
	head=deletenode(head,4);
		print(head);

	return 0;

}