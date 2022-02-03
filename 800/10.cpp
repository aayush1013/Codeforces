
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string a;
   cin>>a;
   sort(a.begin(),a.end());
 
   for(int i = 0 ; i<a.size();i++)
   {
    if(a[i]=='+')
    {
        continue;
   }
   else
   {
   if(i==a.size()-1)
   {
    cout<<a[i];
   }
   else
   {
   cout<<a[i]<<"+";
   }}}
 return 0;
}