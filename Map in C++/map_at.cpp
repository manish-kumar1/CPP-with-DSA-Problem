

#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> map1;

    map<int, char> map2;
    
    map1[1] = "abc";
    map1[2] = "def";

    map1[3] = "ghi";

    map1[4] = "jkl";

    map1[1] = 'd';

    map1[2] = 'a';

    map1[3] = 't';

    // print the associated element
    cout << "Element at map1[2] = "<< map1.at(2) <<endl;

    // cout << "Element at map2[2] = "<< map2.at(2)<<endl;

    return 0;
}