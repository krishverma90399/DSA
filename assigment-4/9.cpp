#include <iostream>
#include <vector>
using namespace std;
void printTriplets(vector<int> arr, int sum) {
    int n=arr.size();
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++) {
                if (arr[i]+arr[j]+arr[k]==sum){
                    int a=arr[i],b=arr[j],c=arr[k];
                    if(a>b)swap(a,b);
                    if(b>c)swap(b,c);
                    if (a>b) swap(a,b);
                    cout <<a<<", "<<b<<"and"<<c<<endl;
                }
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n;i++) {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    printTriplets(arr,sum);
    return 0;
}
