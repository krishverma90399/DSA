#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==0){
        cout<<5<<endl;
        return 0;
    }
    int ans=0;
    int k=1;
    while(n>0) {
        int num=n%10; 
        if (num==0) {
            num=5;
        }
        ans=num*k+ans;
         k*=10;
         n/=10;
    }
    cout<<ans<<endl;
    return 0;
}
