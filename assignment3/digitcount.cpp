#include <iostream>
using namespace std;

int main() {
    int n;
    int ans,sum= 0;
    cin>>n>>ans;
    if (n==0 && ans==0) {
        cout<<1<<endl;
        return 0;
    }
    while(n>0){
        if (n%10==ans){
            sum++;
        }
        n/=10;
    }
    cout <<sum<<endl;
    return 0;
}
