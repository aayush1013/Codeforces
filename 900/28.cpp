#include<bits/stdc++.h>
#include<iostream>
typedef long long int ll;
using namespace std;
 
int main()
{
	 int t;
	 cin>>t;
	 while(t--)
	 {
	     ll x1,x2,p1,p2;
	     cin>>x1>>p1;
	     cin>>x2>>p2;
	     ll d1=0,d2=0;
	     int k1,k2;
	     k1=x1;
	     k2=x2;
	     while(k1)
	     {
	         k1=k1/10;
	         d1++;
	     }
	     while(k2)
	     {
	         k2=k2/10;
	         d2++;
	     }
	     if(d1+p1<d2+p2)
	     {
	         cout<<"<"<<endl;
	     }
	     else if(d1+p1>d2+p2)
	     {
	         cout<<">"<<endl;
	     }
	     else
	     {
	     ll n1,n2;
	     n1=x1*(pow(10,6-d1));
	     n2=x2*(pow(10,6-d2));
	    if (n1>n2)
	     {
	         cout<<">"<<endl;
	     }
	    else if (n1==n2)
	     {
	         cout<<"="<<endl;
	     }
	     else
	     {
	         cout<<"<"<<endl;
	     }
	     }
	 }

    return 0;
}