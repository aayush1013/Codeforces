#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int rem,n,k,count=0;
    cin>>n>>k;
    while(n>0)
    {
        rem = n%10;
        if (rem!=0&&count<k)
        {
            n=n-1;
        }
        else if  (count<k)
        {
            n=n/10;
        }
        else
        {
            cout<<n;
            break;
        }
        count++;
    }
        return 0;
}