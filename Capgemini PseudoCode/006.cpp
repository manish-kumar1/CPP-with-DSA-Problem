

#include<iostream>
using namespace std;

int main(){

    int p = 108, q = 2, r = 3;
    
    if((p % 9) == 0 ){

        q = q + (p % 2);
        cout<<q;
    }
    else{

        r = r + (p % 7);
        cout<<r;
    }
    
    return 0;
}

// output  2