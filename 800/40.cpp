#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(c<4 || b<2)
    {
        cout<<0;
        return 0;
    }
    for(ll i=0; (b<(a*2) || c<(a*4));  i++)
    {
        a = a-1;
    }
    cout<<(a+a*2+a*4);
    return 0;
}