#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       if(n%2050!=0)
       {
           cout<<-1<<endl;
       } 
       else
       {
           ll x=n/2050;
           ll sum=0;    
           while(x!=0)
           {
               ll y=x%10;
               sum=sum+y;
               x=x/10;
           }
           cout<<sum<<endl;
        }
    }
   return 0;
}