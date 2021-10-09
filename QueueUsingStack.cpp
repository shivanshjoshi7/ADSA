#include<iostream>
#include<stack>

using namespace std;

stack<int> s1;
stack<int> s2;

int dequeue()
{
	if(s1.empty() && s2.empty())
	{
		cout<<"Underflow: Queue empty"<<endl;
		exit(0);
	}
	int t;
	if(!s2.empty())
	{
		t=s2.top();
		s2.pop();
		return t;

	}
	else
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		t=s2.top();
		s2.pop();
	}
	return t;

}

void enqueue(int val)
{
	s1.push(val);
}

int main()
{
	int t;
	enqueue(5);
	enqueue(7);
	enqueue(8);
	enqueue(1);
	t=dequeue();
	cout<<"Dequeued element is: "<<t<<endl;
	enqueue(4);
	enqueue(8);
	enqueue(9);
	t=dequeue();
	cout<<"Dequeued element is: "<<t<<endl;
	return 0;
}