
#include<iostream>
using namespace std;

int main(){

    int n = 11;

    int ar[4] = {10, 11, 1, 12};

    ar[1] = ar[1] - ar[1];
    ar[2] = ar[2] + ar[2];
    ar[3] = 1 + ar[3];
    
    if(n > ar[3]){
        n = n - 1;
    }
    else{
        n = n - 1;
    }
    cout<<n; 
    
    return 0;
}