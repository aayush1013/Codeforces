#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int l,r,a;
        cin>>l>>r>>a;
        if(l/a==r/a)
        {
         cout<<r/a+r%a<<endl;   
        }
        else
        {
            cout<< std::max(r/a+r%a , r/a-1 + a-1) << endl;
        }
}
    return 0;
}