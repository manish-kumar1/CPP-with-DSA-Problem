

#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> map;

    map[1] = "abc";
    map[3] = "pqr";
    map[2] = "xyz";
    map[4] = "mno";
    
    map.insert({5, "uvw"});
//     for(auto &it : map){
//         cout<< it.first<< " "<< it.second<<endl;
//     }
    std::map<int, string>::iterator it = map.begin();

    while(it != map.end()){
        cout<< it -> first<<" "<< it -> second <<endl;
        it++;
    }
    cout<<"size: "<<map.size();
    return 0;
 }