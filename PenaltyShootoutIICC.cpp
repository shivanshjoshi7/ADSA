#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int score1=0,score2=0;
		int count1=0,count2=0;
		int n,ans;
		cin>>n;
		
		
		//cout<<arr.length()<<endl;
		
		string s;
		cin>>s;
		
		char arr[s.length()+1];
		arr[0]='0';
		for(int i=0; i<s.length(); i++)
		{
			arr[i+1]=s[i];
		}
		/*for(int i=1; i<sizeof(arr); i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;*/
		
		int flag=0;
		for(int i=1; i<=2*n; i++)
		{
			if(i%2==1)
			{
				if(arr[i]=='1')
					score1++;
				count1++;
				if(n-count2+score2<score1 || n-count1+score1<score2)
				{
					flag=1;
					cout<<i<<endl;
					break;
				}

			}
			else
			{
				if(arr[i]=='1')
					score2++;
				count2++;
				if(n-count1+score1<score2 || n-count2+score2<score1)
				{
					flag=1;
					cout<<i<<endl;
					break;
				}
			}
		}
		if(!flag)
			cout<<2*n<<endl;

	}
}