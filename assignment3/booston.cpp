#include <iostream>
#include <cmath>

using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int  n;
    cin>>n;;
    int digi=n;
    int ans=sumOfDigits(n);
    int ans1=0;
    int temp = n;
    for (int i=2;i*i<=temp;i++) {
        while (temp % i == 0) {
            ans1+= sumOfDigits(i);
            temp/=i;
        }
    }
    if (temp > 1) {
        ans1+= sumOfDigits(temp);
    }
    if (temp!=digi && ans==ans1) {
        cout<<1<<endl;
    } else {
        cout<<0<<endl;
    }
    return 0;
}
