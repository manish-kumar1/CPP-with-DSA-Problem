
#include<iostream>
using namespace std;

int main(){

    int r = 2;
    int a[3] = {4,2,1};

    r = r ^ a[2];
    if(a[1] > 1){
        r = r ^ 1;
    }
    else{
        r = r ^ 4;
    }
    cout<<r;

    return 0;
}