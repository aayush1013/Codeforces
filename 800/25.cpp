#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,anton=0,danik=0;
    char s;
	cin>>n;
    while(n--)
    {
	    cin>>s;
	    if (s=='A')
	    {
	        anton++;
	    }
	    else 
	    {
	        danik++;
	    }
	}
	if(anton<danik) 
	{
	    cout<<"Danik"<<endl;
	}
	else if(anton>danik)
	{
	    cout<<"Anton"<<endl;
	}
	else
	{
	    cout<<"Friendship"<<endl;
	}

	return 0;
}
