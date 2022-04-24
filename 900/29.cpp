#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a,b,s,s1,m,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        s=a-b;
        else 
        s=b-a;
        if(a==b)
        cout<<"0 0\n";
        else if(a==0)
        cout<<s<<" "<<"0"<<"\n";
        else if(s==1)
        cout<<"1 0\n";
        else{
            s1=a%s;
            if(s1==0)
            cout<<s<<" "<<s1<<"\n";
            else
            {
                m=s1;
                n=s-s1;
                    if(m>n)
                    s1=n;
                    else
                    s1=m;
                cout<<s<<" "<<s1<<"\n";
            }
        }
    }
    return 0;
}