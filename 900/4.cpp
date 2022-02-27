#include<bits/stdc++.h>
#include<iostream>
using namespace std;
  

int main()
{
   int n,m;
   cin>>n>>m;
   int min = m;
   if(m>n)
   {
       min = n;
   }
   if (n%2==0)
   {
       cout<<"Malvika";
   }
   else
   {
       cout<<"Akshat";
   }
   return 0;
}