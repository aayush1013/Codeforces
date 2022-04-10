#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
    long long n,ans=0;
    cin>>n; 
    if(n<10)
    {
        cout<<n<<endl;
    }
    else if (n>45)
        {
            cout<<"-1\n";
        }
    else
    { 
        for(int i=0;i<9;i++)
        {
          ans += (9-i)*pow(10,i);
          n-=9-i; 
          if(n<9-i)
          {
              ans+= n*pow(10,i+1);
           cout<<ans<<endl;
          break;
          }
        }
            
	}
}
return 0;
}