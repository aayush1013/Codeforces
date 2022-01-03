#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
      int a, b, c;
      unsigned long long int ans;
      cin>>a>>b>>c;
      if(a%c==0)
                ans=a/c;
      else
                ans=a/c+1;
      if(b%c==0)
                ans*=(b/c);
      else
                ans*=b/c+1;
      cout<<ans;
//      system("pause");
}