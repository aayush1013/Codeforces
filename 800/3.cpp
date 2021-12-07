#include<iostream>
using namespace std;
int main()
{
        int a,n=0 ; cin>>a;
        for(int i=1 ; i<=a ; i++)
        {
                int z,x,c;cin>>z>>x>>c;
                if(z+x+c>2)
                n++;
        }
 
cout<<n;
return 0;
}