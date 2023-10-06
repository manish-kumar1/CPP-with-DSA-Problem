
#include<iostream>
#include<map>

using namespace std;

int main(){

    // Create a map of strings to integers
    map<string, int> map;

    // insert some values into the map
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;

    // get a iterator pointing to the first eleemnt in the map
    std::map<string, int>::iterator it = map.begin();

    // Iterator through the map and print the element
    while(it != map.end()){
        cout<<"Key: "<< it->first <<", Value: "<<it->second<<endl;
        it++;
    }
    cout<<"size: "<<map.size();
    return 0;

    // Time complexity: O(n) where is the size of map
}

