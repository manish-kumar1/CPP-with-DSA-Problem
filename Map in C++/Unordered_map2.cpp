
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<int, string> m;

    m[1] = "abc";
    m[4] = "afc";
    m[5] = "dba";
    m[2] = "bsdk";
    m[3] = "def";

    for(auto it : m){
        cout << it.first << " " << it.second <<endl;
    }
    return 0;
}