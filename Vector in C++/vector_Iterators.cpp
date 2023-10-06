
// Vector Iterators Function in c++

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    for( int i=1; i<=5; i++){
        v.push_back(i);
    }
    cout<<"Output of begin and end: "<<endl;
    for(auto i = v.begin(); i != v.end(); i++){
        cout<<*i<<" ";
    }

    cout<<endl;
    cout<<"Output rbegin and rend:"<<endl;
    for(auto i = v.rbegin(); i != v.rend(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"Output cbegin and cend:"<<endl;
    for(auto ir = v.cbegin(); ir != v.cend(); ir++){
        cout<<*ir<<" ";
    }
    cout<<endl;

    cout<<"Output crbegin() and crend() :"<<endl;
    for(auto it1 = v.crbegin(); it1 != v.crend(); it1++){
        cout<<*it1<<" ";
    }
    return 0;
}