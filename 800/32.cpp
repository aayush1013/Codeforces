#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();

    for(int i=0 ; i<l ;)
    {
        if(s[i]=='.')
        {
            cout<<"0";
            i=i+1;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<"1";
            i=i+2;
        }
         else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<"2";
            i=i+2;
        }
    }
    return 0;
}
 
