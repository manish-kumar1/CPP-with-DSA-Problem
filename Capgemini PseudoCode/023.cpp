
#include<iostream>
using namespace std;

int main(){

    int a = 1, b = 6, c = 4;

    c = (a + b) & a;
    c = (c + c) + a;
    b = (9+8) + a;
    c = a & c;
    cout << a + b + c;
    return 0;
}