#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum;
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            if(arr[i]+arr[j]==sum){
                if (arr[i]<arr[j]){
                    cout<<arr[i]<<"and"<<arr[j] <<"\n";
                } 
                else{
                    cout<<arr[j]<<"and"<<arr[i]<<"\n";
                }
            }
        }
    }
    return 0;
}
