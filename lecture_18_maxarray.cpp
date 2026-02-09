#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={11,22,88,44,66};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;

}