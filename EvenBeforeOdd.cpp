// This code places even nos before odd nos in the array
// Time Complexity: O(n)

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;                                  //Enter the array size
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];                         //Enter array elements

	int i=0,j=n-1;                           //Initializing the pointer variables
	int temp;

	while(i<=j)
	{
		if(arr[i]%2==0 && arr[j]%2==0)       //Main logic-elements to the left of i are even and to the right of j are odd                                  //This stops when i<=j
			i++;
		else if(arr[i]%2==1 && arr[j]%2==0)
		{
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			i++;
			j--;
		}
		else if(arr[i]%2==0 && arr[j]%2==1)
		{
			i++;
			j--;
		}
		else
			j--;
	}
	for(int i=0; i<n; i++)     //Printing the output array
		cout<<arr[i]<<" ";

	return 0;
}