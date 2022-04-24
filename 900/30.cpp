#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int sum=0;
    int count=0;
    int mount=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum%2==0 && sum!=1)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                count++;
            }
        }
        cout<<count<<endl;

    } 
    else 
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                mount++;
            }
        }
        cout<<mount<<endl;
    } 
    

    return 0;
  
}