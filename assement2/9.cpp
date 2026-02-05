#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		for(int j=n-1;j>=i;j--){
			cout<<"  ";
		}
			for(int j=n-2;j>=i;j--){
			cout<<"  ";
		}

		for(int j=i;j>=1;j--){
			if(j==n)
			continue;
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}