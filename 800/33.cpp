#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
#define long long int ll;

using namespace std;

int main(){
    int n;
    int count=0,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]==1)
    {
       count++;
    }
    else 
    {
      cnt++;  
    }
    }
    if(count>=1){
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    
    return 0;
}