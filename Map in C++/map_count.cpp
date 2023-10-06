

#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, int> mp;

    mp.insert({2, 30});
    mp.insert({1, 34});
    mp.insert({5, 10});
    mp.insert({3, 45});
    mp.insert({4, 60});

    // checkif key 1 is present or not
    if(mp.count(1)){
        cout << "The key 1 is present\n";
    }
    else{
        cout << "The key 1 is not present\n";
    }
    if(mp.count(100)){
        cout << "The key 100 is present\n";
    }
    else{
        cout << "The key 100 is not present "<<endl;
    }
    return 0;
}