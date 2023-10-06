
#include<iostream>
using namespace std;

int main(){
    int a = 9, b = 5, c=5;

    a = 5 & b;
    c = (11 & 4) + b;
    c = c + c;
    c = (b + 11) ^ b;

    cout<< a+b+c;

    return 0;
}