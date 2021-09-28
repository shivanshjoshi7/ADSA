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

int check(node* q, int k)
{
	int cnt=0;
	while(q!=NULL)
	{
		cnt++;
		q=q->next;
	}
	int ans;
	if(cnt>=k)
		ans=1;
	else
		ans=0;
	return ans;
}

node* reverseGroupK(node* head, int k)
{
	node* p=NULL;
	node* q=head;
	node* r;
	int count=0;
	int flag=0;
	if(check(q,k))
		flag=1;
	

	if(flag==0)
		return head;
	
	while(q!=NULL && count!=k) //  q!=NULL not required, it is required if we want to reverse <k elements also, 1 2 3 4 5 6 7 8 , and k=3 , if we want to reverse 3 2 1 | 6 5 4 | 8 7 , then q!=NULL comes into picture also we need to remove flag check for that case
	{
		r=q->next;
		q->next=p;
		p=q;
		q=r;
		count++;
	}
	
	if(r!=NULL)
		head->next=reverseGroupK(r,k);
	
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
		insertlist(&head, value);
	}
	//printlist(&head);

	int k;
	cin>>k;
	head=reverseGroupK(head,k);
	printlist(&head);

}