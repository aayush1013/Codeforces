#include <iostream>
#include <list>
#include <string>
#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;
 
int main()
{
    int a, b, div, rem;
    cin >> a >> b;
    int sum = a;
    while(a >= b)
    {
        div = a / b;
        sum += div;
        rem = a % b;
        a = div + rem;
    }
    cout << sum << endl;
    return 0;
}