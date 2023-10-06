
#include<iostream>
using namespace std;

int function(int a, int b){
    if(a < b){
        return function(b, a);
    }
    else if(b != 0){
        return (a + function(a, b - 1));
    }
    else{
        return 0;
    }
}
int main(){

    int a = 8, b = 9;

    int ans = function(a, b);
    cout << ans;

    return 0;
}