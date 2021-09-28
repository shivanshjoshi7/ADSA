// This code sorts 0,1,2 using Dutch National Flag Algorithm
// Time Complexity: O(n)

#include<iostream>
using namespace std;

void swapp(int &x,int &y)       //Swap function
{
	int temp=x;
	x=y;
	y=temp;

}
int main()
{
	int n;
	cin>>n;                     //Enter the size of array
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];            //Enter array elements

	if(n==0)                    //Enter at least one element
		return -1;

	int low=0,mid=0,high=n-1;   //Initialize three pointer variables

	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swapp(arr[low],arr[mid]);
			low++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			swapp(arr[mid],arr[high]);
			high--;
		}
	}
	for(int i=0; i<n; i++)      //Printing the sorted array
		cout<<arr[i]<<" ";
	
	return 0;
}