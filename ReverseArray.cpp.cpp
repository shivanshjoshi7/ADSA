// This code reverses the array elements
// Time Complexity: O(n)

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;                    //Enter array size
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];           //Enter array elements
	
	int i=0,j=n-1;             //Initialize pointer variables
	int temp;

	while(i<=j)
	{
		temp=arr[j];           //Swapping arr[i] and arr[j] till i<=j
		arr[j]=arr[i];
		arr[i]=temp;
		i++;
		j--;	
	}

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";     //Printing the reversed array
	}
	return 0;
}