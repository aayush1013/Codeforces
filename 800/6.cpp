#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int X=0;
    for(int i=0;i<n;i++)
    {
    string s;
    cin>>s;
    if(s == "++X" || s== "X++")
    {
        X++;
    }
    else 
    {
        X--;
    }}
    cout<<X;
    return 0;
}