#include<iostream>
using namespace std;

int Factorial(int n){
    if(n == 0){
        return 1;
    }
    int ans = n * Factorial(n-1);
    return ans;
}
int main(){

    int n;
    cin >> n;

    cout << Factorial(n);
}