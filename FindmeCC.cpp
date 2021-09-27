#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        if(k==arr[i])
        {
            flag=true;
            break;
        }
    }
    flag?cout<<"1":cout<<"-1";
	return 0;
}
