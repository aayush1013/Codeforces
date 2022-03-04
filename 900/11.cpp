#include<iostream>
#include<string>
using namespace std;
 
   int main () {
	int n;
	cin >> n;
	int x = n;
	if (n/10 > x)
	{
	    x = n/10;
	}
	{
	if (n%10 + (n/100)*10 > x) 
	{
	    x = n%10 + (n/100)*10;
	}
	{
	cout << x;
	}
}
 return 0;
}
