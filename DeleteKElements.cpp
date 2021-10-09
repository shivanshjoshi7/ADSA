/*
Given an array arr[] and a number k. The task is to delete k elements which are smaller
than next element (i.e., we delete arr[i] if arr[i] < arr[i+1]) or become smaller than next
because next element is deleted.
*/


#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];

	stack<int> s;

	s.push(arr[0]);
	int cnt=0;
	for(int i=1; i<n; i++)
	{
		while(!s.empty() && cnt!=k && s.top()<arr[i])
		{
			s.pop();
			cnt++;
		}
		s.push(arr[i]);
	}

	int ans[n-k];
	for(int i=n-k-1; i>=0; i--)
	{
		int x=s.top();
		ans[i]=x;
		s.pop();
	}

	for(int i=0; i<n-k; i++)
		cout<<ans[i]<<" ";
	return 0;
}