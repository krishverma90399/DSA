/*
sum of digit -factors (jo prime)ko add ho unhe khete hain 
387=lcm lene ke baad 2*3*3*3*7 =18=18 is booston  number
digit sum
factor 
prime 
contraint 
ye hota hai ki boston number agar sum of digit or = to me prime hai to vo boston hai 
*/
#include <iostream>
using namespace std;
int digitsum(int n){
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum+=k;
        n/=10;
    }
    return sum;
}
bool prime (int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int factor=0;
    sum=digitsum(n);
    for(int i=2;i<=n;i++){
        while(n%i==0){
            if(prime(i)){
                factor+=digitsum(i);
            }
            n=n/i;
        }
    }
    cout<<sum<<endl;
    cout<<factor<<endl;
    if(sum==factor){
        cout<<"Botson"<<endl;
    }
    else{
        cout<<"Not Boston"<<endl;
    }
    return 0;
}