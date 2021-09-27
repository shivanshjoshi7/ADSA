// Problem link: https://www.codechef.com/problems/FINDSUM

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;

		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		
		unordered_map<int,int> map;
		map[0]=-1;

		int count=0;
		int pindex=-1;
		int psum=0;
		for(int i=0; i<n; i++)
		{
			psum+=arr[i];
			map[psum]=i;
			if(map.count(psum-k) && map[psum-k]>=pindex)
			{
				count++;
				pindex=i;
			}
			
		}
		cout<<count<<endl;

	}
}
