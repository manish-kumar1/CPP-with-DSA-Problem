

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vect;

    cout<<"size: "<<vect.size()<<endl;
    cout<<"capacity: "<<vect.capacity()<<endl;
    vect.push_back(2);

    cout<<"size: "<<vect.size()<<endl;
    cout<<"capacity: "<<vect.capacity()<<endl;
    vect.push_back(8);

    cout<<"size: "<<vect.size()<<endl;
    cout<<"capacity: "<<vect.capacity()<<endl;
    vect.push_back(5);

    cout<<"size: "<<vect.size()<<endl;
    cout<<"capacity: "<<vect.capacity()<<endl;
    vect.push_back(4);

    cout<<"size: "<<vect.size()<<endl;
    cout<<"capacity: "<<vect.capacity()<<endl;
    vect.push_back(3);

    cout<<"size: "<<vect.size()<<endl;
    cout<<"capacity: "<<vect.capacity()<<endl;
    vect.push_back(1);

    vect.push_back(3);
    cout<<vect.size();

    return 0;
    
}