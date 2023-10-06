
#include<iostream>
using namespace std;

int main(){
    int p = 9, q = 4, r = 8;
    if(6 > q || 4 > q){
        r = 8 + p;
    }
    else{
        r = 3 + r;
        q = (9^6)+r;
    }
    p = 9 ^ r;
    cout<< p + q + r;

    return 0;
}