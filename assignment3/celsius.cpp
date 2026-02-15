#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >>a>>b>>c;
    int fahrenheit=a;
    while (fahrenheit<=b) {
        int celsius=(fahrenheit-32)*5/9;
        cout<<fahrenheit<<celsius<< endl;
        fahrenheit+=c;
    }
    return 0;
}
