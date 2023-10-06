
#include<iostream>
using namespace std;

int main(){

    int p, q, r;
    p = 2, q = 1, r = 3;
    
    p = q + r;
    r = q + p;

    if(p > 0 && q > p){
        p = q;
    }
    cout<<p;
    
    return 0;
}

//  output  4