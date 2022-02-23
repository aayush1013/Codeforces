#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
  
int main()
{
    string s;
    cin>>s;
    string b;
    cin>>b;
    
    reverse(s.begin(),s.end());
    
    if(s==b)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";    
    }
    return 0;
}
