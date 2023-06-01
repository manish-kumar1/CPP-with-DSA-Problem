#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1={1,2,3,4};
    for(auto x:l1){
        cout<<x<<" ";
    }
}