#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n!=0){
        int k=n%10;
        int inv=9-k;
        if(inv<k){
            rev=rev*10+k;
        }
        else{
            rev=rev*10+inv;

    }
        
    }
    
    return 0;
}