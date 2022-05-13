#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    ll earlier=1;
    ll present;
    ll time=0;
    for (int i=0;i<m;i++)
    {
        cin>>present;
        if (present>=earlier)
        {
            time+=present-earlier;
        }
        else
        {
            time += n-(earlier-present);
        }
        earlier = present;
    }
    
    cout << time <<endl;
    return 0;
}