#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int ls = arr[n-1] - arr[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (arr[i+n-1] - arr[i] < ls)
        {
            ls = arr[i+n-1] - arr[i];
        }
    }
    cout << ls << endl;
    return 0;
}