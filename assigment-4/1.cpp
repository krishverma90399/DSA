#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int>arr,int a){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==a)
            return i;
    }
    return -1;  
}
    int main(){
        int n,a;
        if(cin>>n){
            vector<int>arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            cin>>a;
            cout<<linearsearch(arr,a);
    }
return 0;
}