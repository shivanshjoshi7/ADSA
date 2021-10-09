/* 2. Madhav is an investor who frequently invests in stocks
and likes to keep track of stock’s price for a company
everyday. He needs to calculate the span of the stock
price for all N days. The span S i of the stock’s price on
a given day i is defined as the maximum number of
consecutive days just before the given day, for which the
price of the stock on the current day is less than or
equal to its price on the given day.
Input format:
N [number of days]
Array of N elements [stock price for the i th day]
Output format:
Array of N elements [span of corresponding stock price]
Examples:
Input 1:
7
100 95 50 60 110 90 120
Output 1:
1 1 1 2 5 1 6
Input 2:
5
30 50 75 50 40
Output 2:
1 2 3 1 1 */

#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;

	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];

	int ans[n];
	ans[0]=-1;
	s.push(0);
	

	for(int i=1; i<n; i++)
	{
		while(!s.empty() && arr[i]>=arr[s.top()])
			s.pop();

		if(s.empty())
		{
			ans[i]=-1;
		}	

		else
		{
			ans[i]=s.top();
		}

		s.push(i);

	}

	int span[n];

	for(int i=0; i<n; i++)
	{
		if(ans[i]==-1)
			span[i]=i+1;

		else
			span[i]=i-ans[i];
	}

	cout<<"Stock Price Span: ";
	for(int i=0; i<n; i++)
	{
		cout<<span[i]<<" ";
	}

}

