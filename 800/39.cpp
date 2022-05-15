#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int t,n;
    
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n;
        int a[n];
        int count1 = 0;
    int count2 = 0;
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
            if(a[j]==1)
            {
                count1 = count1 +1;
            }
            else
            {
                count2 = count2 +1;
            }
        }
        if((count1+count2*2)%2!=0 || count1==0 && count2%2!=0)
        {
            cout<<"NO"<<endl;
        }
        
        else
        {
           cout<<"YES"<<endl;
        }
    }
    return 0;
}