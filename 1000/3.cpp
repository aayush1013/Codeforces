#include <iostream>
using namespace std;

int main() {
    int sum1=0, sum2=0, sum3=0;
        int n;
        cin>>n;
        for(int i=0; i<=n-1; i++){
            int x,y,z;
            cin>>x>>y>>z;
            sum1 = sum1 + x;
            sum2 = sum2 + y;
            sum3 = sum3 + z;
            
        }
        
    if(sum1==0 && sum2==0 && sum3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	return 0;
}