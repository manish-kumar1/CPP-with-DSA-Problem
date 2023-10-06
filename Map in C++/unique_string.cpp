

/*
Given N strings, print unique strings in lexiographical 
order with thier frequency
N <= 10^5
|S| <= 100
*/

#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> map;

    int n;
    cin>>n;

    for(int i = 0; i < n; ++i){
        string s;
        cin>>s;
        map[s]++;
    }
    for(auto itr : map){
        cout<< itr.first << " " << itr.second <<endl;
    }
    return 0;
}