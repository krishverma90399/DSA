#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<long long>& arr, int n){
    for (int i = 0; i < n / 2; i++) {
        long long temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
int main() {
    int n;
    cin>>n;
    if(n<0) 
    return 0;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n > 0) {
        reverseArray(arr, n);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
