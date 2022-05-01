#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
#define long long int ll;

using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int mod = n % 2020;
        int div = n / 2020;

        if( mod <= div){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}