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
		int n;
		cin >> n;
        int arr[n];
		    for(int i=0;i<n;i++)
		    {
		        cin>>arr[i];
		    }
		sort(arr,arr+n);
        if(arr[n-1]-arr[n-2]>1)
        {
            cout<<"NO"<<endl;
        }
        else if(n==1 && arr[0]!=1)
        {
             cout<<"NO"<<endl;
        }
        else
        {
             cout<<"YES"<<endl;
        }
    }
	return 0;
}