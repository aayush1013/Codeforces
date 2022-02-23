#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string s ="hello";
    int count=0;
    int j=0;
    for (int i=0;i<str.length();i++)
    {
        if(str[i]==s[j])
        {
        count++;
        j++;
        }
    }
    if (count==5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}