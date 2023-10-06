
#include<iostream>
using namespace std;

int function(int n){
    
    if(n == 1){
        return 0;
    }
    return (n - 1) + function(n - 1);
}
int main(){

    int n;

    int ans = function(6);
    cout<<ans;

    return 0;
}