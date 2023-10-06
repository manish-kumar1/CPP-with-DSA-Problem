
#include<iostream>
using namespace std;

int main(){

    int p = 9, q = 9, r = 10;
    for(r = 3; r <= 4; r++){
        p = p + p;
    }
    for(r = 2; r <= 5; r++){
        p = r + p;
    }
    cout << p + q;
    return 0;
}


// output  59