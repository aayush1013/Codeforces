#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int n,count = 0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        if(a[i]==a[0]  || a[i]==a[n-1])
        {
            count = count +1;
        }
    }
    cout<<n-count;

    return 0;
}