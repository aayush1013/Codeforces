#include<bits/stdc++.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    int t;
	cin >> t;
	while (t--)
	{
		bool f = true;
		int n, k;
		string s;
		cin >> n >> k >> s;
		if (!k) cout << "YES" << '\n';
		else if (n / k > 1 && n != k *2)
		{
			for (int i = 0; i < k; i++)
			{
				if (s[i] != s[s.size() - i - 1])
				{
					f = false;
					break;
				}
			}
			if (f)
			{
			    cout << "YES\n";
			}
			else 
			{
			    cout << "NO\n";
			}
		}
		else cout << "NO\n";
	}
	return 0;
}