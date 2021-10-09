/*1. Amit is very conservative person and he likes to
collect cards with number from 0 to 100 and he keeps them
in sorted order and maintains the even count for every
card, one day his friend sahil comes and mixes up all his
cards and took one of the card and then challenges amit
to find it out as fast as he can, as both of them likes
programming, amit accepted the challenge, now you have to
help amit by finding out which card is picked up by
sahil. Amit has a total K no of cards with numbers from 0
to 100.
Input format:
1. K, total number of cards
2. Array of K elements
Output format:
Print the number on the card which is picked up by
sahil, if not found print -1
Examples:
Input 1:
15
20 19 53 63 74 53 19 63 87 53 20 19 74 53 19
Output 1:
87*/

#include <iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> map;
    int k;
    cin>>k;
    
    int arr[k];
    for(int i=0; i<k; i++)
     {
         cin>>arr[i];
         map[arr[i]]++;
     }  
     int flag=0;
     unordered_map<int,int> :: iterator it;
     for(it=map.begin(); it!=map.end(); it++)
     {
         if(it->second%2==1)
         {
             cout<<it->first<<endl;
             flag=1;
             break;
         }
     }
    
    if(flag==0)
        cout<<"-1"<<endl;

    return 0;
}
