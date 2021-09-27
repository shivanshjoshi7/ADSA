// Problem link: https://www.codechef.com/problems/CDPWST

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long int ans;
	while(t--)
	{
		int n;
		cin>>n;
		ans=1;
		for(int i=1; i<n; i++)
		{
		    ans=ans<<1;
		    ans=ans%1000000007;
		}
		ans=ans>>1;
		ans=(ans*n)%1000000007;
		ans=(ans*(n+1))%1000000007;
		
		cout<<ans<<endl;
	}
	return 0;
}
