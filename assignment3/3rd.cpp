#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int rev=0;
    while(n>0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}