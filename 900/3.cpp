#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
  

int main()
{
   int n;
   cin>>n;
   int arr[n];
   int sum=0;
   int c=0;
   int a=0;
 
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       sum = sum +arr[i];
   }
   int b =sum/2;
 
   sort(arr,arr+n);
 
   for(int j=n-1;j>=0;j--)
   {
       c = c + arr[j];
       a++;
 
       if(c>b)
       {
           break;
       }
 
   }
 
   cout<<a;
 
    return 0;
}