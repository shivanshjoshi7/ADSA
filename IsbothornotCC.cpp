#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	n%5==0 && n%11==0 ? cout<<"BOTH" : n%5==0 || n%11==0 ? cout<<"ONE" : cout<<"NONE";
	return 0;
}
