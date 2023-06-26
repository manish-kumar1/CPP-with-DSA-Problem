
#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    a = 4, b = 5, c = 3;

    b = 3 + c;
    
    a = b & a;
    c = c + b;
    a = a + b;

    cout<<a+b+c;

    return 0;
}

//  output  25