

#include<iostream>
using namespace std;

int main(){

    int p, q, r;

    p = 0, q = 7, r = 10;
    if((q^r^p) < (r + p + q)){
        r = (p + 1) ^ q;
        q = q + p;
    }
    cout<<q+p+r;

    return 0;
}