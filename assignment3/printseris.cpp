#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int a=0;
    int b;
	cin>>n1;
	cin>>n2;
	for(int i=1;i<=n1;i++)
	{
		for(int j=(a+i);j<=1001;j++){
            b=(3*j)+2;
            if(b%n2!=0) {
               cout<<b<<endl;
               break;
            }
            else
            a++;
        }
	}
	return 0;
}