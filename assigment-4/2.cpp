#include<iostream>
#include<vector>
using namespace std;
void inversearray(vector<int>arr,vector<int>inv,int idx){
    if(idx==arr.size()){
        return ;
    }
    int val=arr[idx];
    inv[val]=idx;
    inversearray(arr,inv,idx+1);
}
int main(){
    int n;
    if(cin>>n){
        vector<int>arr(n);
        vector<int>inv(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        inversearray(arr,inv,0);
        for(int i=0;i<n;i++){
            cout<<inv[i]<<(i==n-1?"":" ");
        }
    }
    return 0;
}