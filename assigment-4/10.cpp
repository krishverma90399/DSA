#include <iostream>
using namespace std;

void invertArray(int arr[], int inv[], int index, int n) {
    if (index == n) return;
    inv[arr[index]] = index;
    invertArray(arr, inv, index + 1, n);
}
int main() {
    int n;
    cin>>;
    int arr[N], inv[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    invertArray(arr, inv, 0, N);
    for (int i = 0; i < N; i++) {
        cout << inv[i] << " ";
    }
    return 0;
}
