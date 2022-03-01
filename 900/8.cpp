#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,count=0,x=1;
    cin >> m;
    int arr[m];
    for (int i=0; i<m; i++)
    {
        cin >> arr[i];
            if(arr[i]>=arr[i-1])
        {
            count++;
            x = max(x,count);
        }
        else
        {
           count=1;
        }
    }
    cout<<x<<endl;
}