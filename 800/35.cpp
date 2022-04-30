#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
#define long long int ll;

using namespace std;

int main(){
  int n;
    cin>>n;
    int a[n];
    double ans=0.0,sum=0.0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    
    return 0;
}