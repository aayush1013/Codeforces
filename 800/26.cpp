#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long p,q;
    cin>>q;
    if(q % 2 == 0)
    {
        p = q/2;
    }
    else
    {
        p = ((q+1)/2)*(-1);
    }
    cout<<p;
    return 0;
}