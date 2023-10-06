
#include<iostream>
#include<map>

using namespace std;

int main(){

    // map intilization
    map<int, int> m;

    // insert elements in random order
    m.insert(pair<int, int>(1, 30));
    m.insert(pair<int, int>(2, 10));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(3, 35));
    m.insert(pair<int, int>(4, 57));

    m[6] = 50;  // another way of inserting a value in a map

    // printing map m
    map<int, int>::iterator itr;
    cout<<"\nThe map m is : \n";
    cout<<"\tKEY\tELEMENT"<<endl;

    for(itr = m.begin(); itr != m.end(); ++itr){
        cout<<'\t' <<itr -> first <<'\t' << itr -> second <<endl;
    }
    cout<<endl;

    // assigning the elements from m to m
    map<int, int> m2(m.begin(), m.end());

    // print all elements of the map m2
    cout<<"\n The map m2 after"<<" assing from m is :\n";
    cout<<"\tKEY\tELEMENT\n";
    
    for(itr = m2.begin(); itr != m2.end(); ++itr){
        cout<<'\t' << itr -> first <<'\t' << itr -> second <<endl;
    }

    cout<<endl;

    // remove all elements up to
    // element with key = 3 in m2
    cout<<"\nm2 after removal of"<<" elements less than key=3 :\n";
    cout<<"\tKEY\tELEMENT\n";

    m2.erase(m2.begin(), m2.find(3));
    for(itr = m2.begin(); itr != m2.end(); ++itr){
        cout<<'\t'<< itr ->first <<'\t' << itr -> second <<endl;
    }

    cout<<endl;

    // lower bound to upper bound for map m key = 5
    cout<<"m.lower_bound(5) : "<<"\tKEY = ";
    cout<< m.lower_bound(5) -> first <<'\t';
    cout<< "\tELEMENT = "<< m.lower_bound(5) -> second <<endl;

    cout<<"m.upper_bound(5) : "<<"\tKEY = ";
    cout<< m.upper_bound(5) -> first <<'\t';
    cout<< "\tELEMENT = "<< m.upper_bound(5) ->second <<endl;

    return 0;
}