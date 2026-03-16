#include <iostream>
using namespace std;
int findMax(int arr[], int n){
    int maxVal=arr[0];  
    for (int i=1;i<n;i++){
        if (arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    return maxVal;
}
int main(){
    int n;
    cin>>n;
    if(n<=0){
        return 0;
    }
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int result=findMax(arr, n);
    cout<<result<< endl;
    return 0;
}
