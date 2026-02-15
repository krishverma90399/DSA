#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
         int aayush_spent=0;
         int harshit_spent=0;
         int count=1;
         while (true)    
                 if (count % 2 != 0) {
                 if (aayush_spent+count<=a) {
                    aayush_spent+=count;
                } 
                else {
                    cout <<"Harshit"<< endl;
                    break;
                }
            } 
            else {
                if (harshit_spent+count<=b) {
                    harshit_spent+=count;
                } 
                else {
                    cout<<"Aayush"<<endl;
                    break;
                }
            }
            count++; 
        }
        return 0;
    }
  

