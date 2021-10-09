#include<iostream>
#include<vector>
#include<stack>
using namespace std;

stack<int> st;

int arr[1000];
int front=-1;
int rear=-1;

class Queue{

public:
	bool isEmpty()
	{
		if(front==-1 && rear==-1)
			return true;
		else return false;
	}

	bool isFull()
	{
		if(rear==999)
			return true;
		else return false;
	}

	int head()
	{
		if(front==-1)
		{
			cout<<"No element in the Queue "<<endl;
			return -1;
		}
		return arr[front];
	}

	void enqueue(int val)
	{
		if(isFull())
		{
			cout<<"Queue is full "<<endl;
			return;
		}
		else if(isEmpty())
		{
			front++;
			rear++;
		}
		else
		{
			rear++;
		}
		arr[rear]=val;
	}

	void dequeue()
	{
		if(isEmpty())
		{
			cout<<"Queue id empty "<<endl;
			return;
		}
		else if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}	
	}
};

int main()
{
	int n,k,val;
	cin>>n>>k;

	Queue q;

	for(int i=0; i<n; i++)
	{
		cin>>val;
		q.enqueue(val);
	}


	for(int i=0; i<k; i++)
	{
		st.push(q.head());
		q.dequeue();
	}

	while(!st.empty())
	{
		int temp=st.top();
		q.enqueue(temp);
		st.pop();
	}
	for(int i=1; i<=n-k; i++)
	{
		int temp=q.head();
		q.enqueue(temp);
		q.dequeue();
	}

	cout<<"Queue after reversing first k elements: ";
	for(int i=front; i<=rear; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}