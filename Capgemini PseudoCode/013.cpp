
#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    a = 5, b = 5, c = 5;

    for(int c = 4; c <= 5; c++){
        if(1 + 7 < 10 - a){
            a = a + b;
        }
        a = (a + c) + c;
        b = (11 & 12) + a;
    }
    cout<<a+b;

    return 0;
}

//  output  54