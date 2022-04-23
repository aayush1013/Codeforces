#include<bits/stdc++.h>
#include<iostream>
#include<list>
typedef long long int ll;
using namespace std;
 
int main()
{
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll min1 = min(k * l / nl, c * d);
    ll min2= min(min1, p/np);
    cout<< min2/n<<endl;

return 0;
}