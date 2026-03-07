#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        int sum;
        cin>>sum;
        if(sum==0){
            a++;
        }
        else{
            b++
        }
    }
    for(int i=0;i<a;i++) {
        cout<<0<<" ";
    }
    for(int i=0;i<b;i++) {
        cout<<1<<" ";
    }
    return 0;
}
