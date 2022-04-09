#include<bits/stdc++.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		if(n%2==0)
		{
			cout << n+2*k << endl;
			continue;
		}
		int x = 0;
		for(int i = n; i>=2; i--)
			if(n%i==0)
		    	x = i;
		cout << n+x+2*(k-1) << endl;
	}
	return 0;
}