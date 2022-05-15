#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;
 
int main()
{
    ll n;
    ll count1 = 0;
    ll count2 = 0;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='L')
        {
          count1 = count1 + 1;
        }
        else
        {
            count2 = count2 + 1;
        }
    }
 
    cout<<count1+count2+1;
    return 0;
}
