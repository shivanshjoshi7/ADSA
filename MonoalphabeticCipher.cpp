#include<iostream>
#include<string>
#include<unordered_map>
#define pb push_back
using namespace std;

unordered_map<char,char> map1;
unordered_map<char,char> map2;

void decrypt(string s)
{
	string d;
	for(int i=0; i<s.length(); i++)
	{
		d.pb(map2[s[i]]);
	}

	cout<<"\n"<<"Plain text: ";

	for(int i=0; i<d.length(); i++)
	{
		cout<<d[i];
	}
}

string encrypt(string s)
{
	string e;
	for(int i=0; i<s.length(); i++)
	{
		e.pb(map1[s[i]]);
	}

	return e;
}
int main()
{
	string s;
	cout<<"Enter the message"<<"\n";
    getline(cin,s);

	string a="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	string k;
	cout<<"Enter 53 character key, no repetitions"<<"\n";
	getline(cin,k);

	for(int i=0; i<a.length(); i++)
	{
		map1[a[i]]=k[i];
		map2[k[i]]=a[i];
	}

	string s1=encrypt(s);
	cout<<"Cipher text: "<<s1;

	decrypt(s1);
	
	return 0;
}