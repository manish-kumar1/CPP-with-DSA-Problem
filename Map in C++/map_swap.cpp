

#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int , char> map1;
    map<int, char> map2;

    map1[1] = 'a';
    map1[2] = 'b';
    map1[3] = 'c';
    map1[4] = 'd';

    map2[5] = 'w';
    map2[6] = 'x';
    map2[7] = 'y';

    swap(map1, map2);

    cout<< "map1:\n";
    cout<<"\tKEY\tELEMENT\n";

    for(auto itr = map1.begin(); itr != map1.end(); ++itr){
        cout<< "\t" << itr -> first << "\t" << itr -> second <<'\n';
    }

    cout<<endl;
    cout<<"map2: "<<endl;
    cout << "\tKEY\tELEMENT\n";

    for(auto itr = map2.begin(); itr != map2.end(); ++itr){
        
        cout << "\t" << itr -> first << "\t" << itr -> second <<endl;
    }
    return 0;
}