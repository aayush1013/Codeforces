#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
#define long long int ll;

using namespace std;

int main(){
    int n, m = 0, a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(i == 0){
            cout<<a<<" ";
            m = a;
        }
        else{
            cout<<a+m<<" ";
            m = max(m,(a+m));
        }
    }
    cout<<endl;

    return 0;
}