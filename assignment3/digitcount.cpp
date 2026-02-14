#include<iostream>
using namespace std;

int main(){
    int a,b;
    int digitcount=0;
    cin>>a>>b;
    while(a>0){
        if(a%10==b){
            digitcount++;
        }
        a/=10;
    }
    cout<<digitcount;
    return 0;
}