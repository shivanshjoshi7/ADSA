/* 
Given an array that stores the height of all the students of a class, print the next greater
height student for every student. The next greater height for a student x is the first student
with greater height on the right side of x in the array. Students for which no student with
greater height exists, Print -1.
Example: I/P: {4, 5, 2, 25} O/P: {5, 25, 25, -1}
*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];

	stack<int> st;

	int ans[n];
	ans[n-1]=-1;
	st.push(arr[n-1]);


	for(int i=n-2; i>=0; i--)
	{
		while(st.top()!=-1 && arr[i]>=st.top())
			st.pop();

		if(st.top()==-1)
			ans[i]=-1;
		else
			ans[i]=st.top();
		st.push(arr[i]);
	}

	cout<<"Next Greater Height array: "<<endl;
	for(int i=0; i<n; i++)
		cout<<ans[i]<<" ";

}