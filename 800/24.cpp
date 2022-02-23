#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int count=0;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        if (arr[k-1]<=arr[i] && arr[i]>0)
        {
            count=count +1;
        }
    }
    cout<<count;
    return 0;
}