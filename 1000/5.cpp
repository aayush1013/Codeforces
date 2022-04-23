#include<bits/stdc++.h>
#include<iostream>
#include<list>
typedef long long int ll;
using namespace std;
 
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll w=a*(b+c);
    ll x=(a+b)*c;
    ll y=a*b+c;
    ll z=a+b*c;
    ll u=a*b*c;
    ll t=a+b+c;
    
    vector<ll> v = { w,  x, y, z, u,t };
    cout<<*max_element(v.begin(), v.end());
	 
return 0;
}