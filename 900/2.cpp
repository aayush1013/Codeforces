#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
  
int main()
{
   int n , k;
cin  >> n >> k;
if(n%2==0){
	if(k>n/2)
		cout << 2*(k-n/2);
	else
		cout << 2*k-1;
}
else{
	if(k>(n+1)/2)
		cout << 2*(k-(n+1)/2);
	else
		cout << 2*k-1;
}
}