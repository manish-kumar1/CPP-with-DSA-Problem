

// Element access from vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vect;

    for(int i = 1; i <= 6; i++){
        vect.push_back(i * 2);
    }
    cout<<"Element in vector :"<<endl;
    for(auto it = vect.begin(); it != vect.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Reference operator [g] : vect[0] = " <<vect[0]<<endl;
    cout<<"Reference operator [g] : vect[3] = " <<vect[3]<<endl;

    cout<<"at vect.at(1) = " <<vect.at(1)<<endl;

    cout<<"front() : vect.front() = " <<vect.front()<<endl;
    
    cout<<"back() : vect.back() = "<<vect.back()<<endl;

    // pointer to the first element

    int* pos = vect.data();
    cout<<"The first element is "<< *pos;

    return 0;
}