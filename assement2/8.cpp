#include<iostream>
using namespace std;
int main() {

	int n;
	cin>>n;
	int x=0;
	int y=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
				cout<<x<<"\t";
			int temp=x+y;
					x=y;
			y=temp;
		}
		cout<<endl;
	}
	return 0;
}