//Code performs infix to postfix and calculates max no of symbols in the stack at an instance

#include<iostream>
#include<string>
#include<stack>
#define pb push_back
using namespace std;

int precedence(char x)
{
	if(x=='^')
		return 3;
	else if(x=='/' || x=='*')
		return 2;
	else if(x=='+' || x=='-')
		return 1;
}
int main()
{
	string s;
	getline(cin,s);

	stack<char>stk;
	int cnt=0,max=0;
	string ans;
	for(int i=0; i<s.length(); i++)
	{
		int x=s[i];
		if(x>='0' && x<='9')
			ans.pb(x);
		else if(x=='(')
			{
				stk.push(x);
				cnt++;
				if(cnt>max) max=cnt;
			}
		else if(x==')')
		{
			while(stk.top()!='(')
			{
				ans.pb(stk.top());
				stk.pop();
				cnt--;
			}
			stk.pop();
			cnt--;
		}
		else
		{
			while(!stk.empty() && stk.top()!='(' && precedence(stk.top())>=precedence(s[i]))
			{
				ans.pb(stk.top());
				stk.pop();
				cnt--;
			}
			stk.push(x);
			cnt++;
			if(cnt>max) max=cnt;
		}

	}
	while(!stk.empty())
	{
		ans.pb(stk.top());
		stk.pop();
	}
	cout<<"Postfix expression = "<<ans<<endl;
	cout<<"Max symbols in the stack at a time = "<<max<<endl;

}