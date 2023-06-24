
#include<iostream>
using namespace std;

int main(){

    int i = 8, j = 6, k = 7, m = 1;

    if((j ^ i) % k == 0){
        m = m + 1;
    }
    else{
        m = m - 1;
    }
    cout<<m;
    
    return 0;
}

// output  2