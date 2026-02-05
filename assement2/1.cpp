#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int m=(n/2)+1;
	for(int i=1;i<=m;i++){
		for(int j=m-i+1;j>=1;j--){
			cout<<"*	";
		}
		for(int j=2;j<=2*i-2;j++){
			cout<<" 	";
		}
		for(int j=m;j>=i;j--){
			if(j==1){
				continue;
			}
			cout<<"*	";
		}
		cout<<endl;
	}

	for(int i=m-1;i>=1;i--){
		for(int j=m-i+1;j>=1;j--){
			cout<<"*	";
		}
		for(int j=2;j<=2*i-2;j++){
			cout<<" 	";
		}
		for(int j=m;j>=i;j--){
			if(j==1){
				continue;
			}
			cout<<"*	";
		}
		cout<<endl;

	}
	return 0;
}