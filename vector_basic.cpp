#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //initialization of vector
    vector<int> a;
    a.push_back(1);
    a.push_back(2);         
    a.push_back(3);
    a.push_back(4);     
    a.push_back(5);
    cout<<a.size()<<endl; //size of vector
    cout<<a.capacity()<<endl;//capacity of vector
    a.pop_back();//delete last element
    for(int i=0;i<a.size();i++){        
        cout<<a[i]<<"  ";
    }
    cout<<a.front()<<endl;//first element find 
    cout<<a.back()<<endl;//last element find
     //insert element at any position
    a.insert(a.begin()+2,6);
    for(int i=0;i<a.size();i++){        
        cout<<a[i]<<"  ";
    }
    //reverse
    reverse(a.begin(),a.end());
    //sort
    sort(a.begin(),a.end());
    return 0;
}
/*
vector <int> a;   garbage value
a.push_back(1);
a.push_back(2);

vector size=0  
phela element push karne ke baad size=0
2 element ke baad size=1
3 element ke baad size=2 or size=2^2=capacity
kyunki size=2^n
*/
// hw 1492 leet code