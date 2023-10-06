
#include<iostream>
using namespace std;

int main(){

    int x, y, z;
    x = 8, y = 6, z = 12;
    if((z < x || (x +y) >(y - x))){
        x = 6 + y;
    }
    cout<<x + y + z;

    return 0;
}

//  output  30