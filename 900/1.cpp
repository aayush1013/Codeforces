#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
  
int main()
{
    string p;
    cin>>p;
    int count=0;
    for (int i=0;i<p.length();i++)
    {
        if(p[i]>=33 && p[i]<=126)
        {
            if(p[i]=='H'||p[i]=='Q'|| p[i]=='9')
            {
                count++;
            }
        }
    }
    
    if(count>0)
            
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";    
    }
    return 0;
}


