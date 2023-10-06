
#include<iostream>
using namespace std;

int fun(int p, int q){
    if(p > 0 && q > 0){
        return fun(0, 2+fun(0, 22+fun(0, 222+fun(0, 2222+fun(0, 22222)))));
    }
    q = 0;
    return p + q;
}
int main(){

    int p = 2, q = 2;
    int ans = fun(p, q);
    cout<<ans;

    return 0;
}

//  output  0
