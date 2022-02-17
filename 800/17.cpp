#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include <ctype.h>
 
using namespace std;
int main()
{
    string s;
    string res="";
    int upper=0;
    int lower=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    
        if(upper>lower)
        {
            for(int i=0;i<s.length();i++)
            {
                //char ch=s[i];
            putchar(toupper(s[i]));
            }
            cout<<res<<endl;
        }
        else if (lower>=upper)
        {
            for(int i=0;i<s.length();i++)
            {
                //char ch=s[i];
            putchar(tolower(s[i]));
            }
            cout<<res<<endl;
        }
        
       
    return 0;
}