#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int one = 0, zero = 0;
        string s;
        cin>>s;
        int l = s.length();
        for(int i=0; i<l; i++){
            if(s[i] == '1')
            {
                one++;
            }
            else 
            {
                zero++;
            }
        }
        int check = min(zero,one);
        if(check == 0 || check%2 == 0)
        {
            cout<<"NET\n";
        }
        else
        {
            cout<<"DA\n";
        }
    }

    return 0;
}