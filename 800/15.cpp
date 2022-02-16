#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n,w,k;
    cin>>k>>n>>w;
    int rem=0;
    for (int i=1;i<=w;i++)
    {
        int total= i*k;
        rem=rem+total;
    }
    if(rem>n)
    {
        rem =rem-n;
    cout<<rem;
    }
    else
    {
        cout<<"0";
    }
    return 0;
}