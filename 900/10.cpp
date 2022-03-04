#include<iostream>
#include<string>
using namespace std;
 
int main(){
    char c;
    cin>>c;
    
   string s="qwertyuiopasdfghjkl;zxcvbnm,./";
 
   string str;
   cin>>str;
 
   for(int i=0;i<str.length();i++)
   {
      
       int m= s.find(str[i]);
 
       if(c=='L')
       {
      
       
           cout<<s[m+1];
       }
       
       else 
       {
           
        cout<<s[m-1];
       }
 
 
 
   }
    return 0;
}
