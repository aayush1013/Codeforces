#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int t;
    cin>>t;
    int sum1 = 0;
    int sum2 = 0;
    string s;

    for(int i=1; i<=t; i++)
    {
        cin>>s;
        int l;
        l = s.size();
        sum1 = s[0]+s[1]+s[2];
        sum2 = s[l-1]+s[l-2]+s[l-3];
        if(sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}