

#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    a = 7, b = 8, c = 7;
    c = (1 ^ 4) + c;
    a = ( b + 12 ) + c;
    b = (a + 2) & a;

    if((c & b) < b || 5 > b){
        b = c + a;
        a  = (c + c) + a;
    }
    a = (b & 9) + a;
    a = (c + c) + a;

    cout<<a+b+c;

    return 0;
}

// output  144