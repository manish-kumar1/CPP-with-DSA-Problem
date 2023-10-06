

// capacity function in vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 1; i <= 5; i++){
        v.push_back(i);
    }
    cout<<"size :"<<v.size()<<endl;
    cout<<"capacity :"<<v.capacity()<<endl;
    cout<<"max_size :"<<v.max_size();

    // resize the vector size to 3
    v.resize(3);
    cout<<"\nsize :"<< v.size();

    cout<<endl;
    // checks if the vector is empty or not
    if(v.empty() == true){
        cout<<"Vector is empty";
    }
    else{
        cout<<"Vector is not empty";
    }

    cout<<endl;

    // Shrinks the Vector
    v.shrink_to_fit();
    cout<<"vector elements are: "<<endl;
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}