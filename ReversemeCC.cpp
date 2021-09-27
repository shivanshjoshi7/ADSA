// Problem link: https://www.codechef.com/CCSTART2/problems/REVMEE

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	    cin>>arr[i];
	int x=0,y=n-1;
	while(x<=y)
	{
	    swap(arr[x++],arr[y--]);
	}
	for(int i=0; i<n; i++)
	    cout<<arr[i]<<" ";
	return 0;
}
