#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	vector<vector<int>> v(n+1,vector<int>(6));
	
	for(int i=1; i<=n; i+=2)
	{
	    for(int j=1; j<=5; j++)
	    {
	        v[i][j]=j+10*(i-1)/2;
	    }
	}
	for(int i=2; i<=n; i+=2)
	{
	    for(int j=1; j<=5; j++)
	    {
	        v[i][j]=5*i-(j-1);
	    }
	}
	
	for(int i=1; i<=n; i++)
	{
	    for(int j=1; j<=5; j++)
	    {
	        cout<<v[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}