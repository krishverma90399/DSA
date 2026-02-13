#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=1;
    int odd=0;
    int even=0;

    while(n>0){
        int x=n%10;
        n=n/10;
        if(ans%2==1){
            odd+=x;
        }
        else{
            even+=x;
        }
        ans++;
    }
    cout<<odd<<endl;
    cout<<even<<endl;
    return 0;
}
