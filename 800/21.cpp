#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,j;
    string str;
    cin>>n>>t;
    cin>>str;
    for (int i=1;i<=t;i++)
    {
        for (j=1;j<=str.length();j++)
        {
            if(str[j-1]=='B'&& str[j]=='G')
        {
        str[j-1]='G';
        str[j]='B';
        j++;
    }}}
    cout<<str;
}