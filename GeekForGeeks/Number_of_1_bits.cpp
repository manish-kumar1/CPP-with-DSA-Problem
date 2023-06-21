
#include<iostream>
using namespace std;

int function1(int n){
    int count = 0;
    while(n){
        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main(){

    int n;
    cin >> n;

    int ans = function1(n);
    cout << ans;

    return 0;
}