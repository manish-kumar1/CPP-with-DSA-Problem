
#include<iostream>
using namespace std;

int main(){

    int p = 2, q = 4, r = 5;

    p = (11 & 10) & r;
    if((p + r + q) < (q + p)){
        for(r = 2; r <= 4; r++){
            p = (1 ^ 1)+ q;
        }
    }
    else
        q = (r ^ q) + r;
    cout<< p + q + r;

    return 0;
}