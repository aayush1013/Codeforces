#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    ll n,m;
    cin >> n >> m;
    ll arr[n];
    ll t=0;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    while(t<m-1)
    {
        t += arr[t];
    }
    if(t==m-1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}