#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int final = 0,k = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        final = (a + k) - b;
        if(final < 0)
        {
            k = 0;
        }
        else
        {
            k = final;
        }      
    cout << final;
}
    return 0;
}