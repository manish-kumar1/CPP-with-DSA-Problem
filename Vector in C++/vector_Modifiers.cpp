

// Modifiers in Vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    // Assign vector
    vector<int> v;

    // fill the vector with 10 five times
    v.assign(5, 10);

    cout<<"the vector elements are: "<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<< v[i]<<" ";
    }

    // inserts 15 to the last position
    v.push_back(15);
    // int n = v.size();
    cout<<"\nThe last element is : "<<v.back()<<endl;

    // removes last element
    v.pop_back();
    cout<<"Last element : "<<v.back()<<endl;

    // prints the vector
    cout<<"The vector element are:"<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
    cout<<"The first element is : "<< v[0]<<endl;
    cout<<"The first element is : "<< v.front()<<endl;

    // removes the first element
    v.erase(v.begin());
    cout<<"The first element : "<<v.front()<<endl;

    // inserts at the beginning
    v.emplace(v.begin(), 7);
    cout<<"The first element is : "<<v[0]<<endl;

    // inserts 30 at the end
    // v.emplace(v.end(), 30);  or
    v.emplace_back(30);
    int n = v.size();
    cout<<"The last element is : "<<v[n-1]<<endl;

    // erase the vector
    v.clear();
    cout<<"vector size after erase(): "<<v.size()<<endl;
    
    cout<<endl;
    cout<<endl;

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);

    v2.push_back(3);
    v2.push_back(4);

    cout<<"Vector v1 : ";
    for(int i = 0; i<v1.size(); i++){
        cout<< v1[i] <<" ";
    }
    cout<<endl;

    cout<<"Vector v2 : ";
    for(int i = 0; i < v1.size(); i++){
        cout<< v2[i] <<" ";
    }
    cout<<endl;

    // swaps v1 and v2
    v1.swap(v2);
    cout<<"After swap \n Vector v1 : ";
    for(int i = 0; i < v1.size(); i++){
        cout<< v1[i] <<" ";
    }
    cout<<"\nVecotr v2: ";
    for(int i = 0; i < v2.size(); i++){
        cout<< v2[i] <<" ";
    }
    return 0;
}