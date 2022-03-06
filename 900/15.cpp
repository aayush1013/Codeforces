#include<bits/stdc++.h>
using namespace std;

int main(){
 int n,one=0,zero=0;
 cin>>n;
 string str;
 cin>>str;
 for(int i=0;i<str.length();i++)
 {
   if(str[i]=='0')
   {
       zero++;
   }
 }
  for(int i=0;i<str.length();i++)
  {
   if( str[i]=='1')
   {
     one++;
   }
  }
 cout<<abs(one-zero);
}