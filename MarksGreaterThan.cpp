/*Suppose all the marks secured in each subject in a semester by a student is stored in
an array, Assume that all the marks are distinct. Write an algorithm to find all the marks in
the array that have at-least two greater marks than themselves.
For example,
Input: {50, 40, 10, 20, 30}
Output: {10 20 30} */

// This code gives the marks of students in the array having at least 2 greater marks than themselves
// Time Complexity: O(nlogn)

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;                    //Input the size of array

	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];           //Input elements

	if(n<3)
	{
		return -1;             //If size<3, then no element can be the answer
	}
	
	sort(arr,arr+n);           //sorting the array, takes O(nlogn) time

	for(int i=0; i<n-2; i++)   //Printing the sorted array till n-3
		cout<<arr[i]<<" ";

	return 0;

}