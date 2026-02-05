#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
        if(i==0 ||i==4 && j==0 || j==4){
        cout<<"* ";
    }
    else if(i==2 && j==2){
        cout<<"@ ";
    }
    else{
        cout<<"# ";
    }
    }
     cout<<endl;
    }
    return 0;
}