
#include<iostream>
using namespace std;

int isNextHappyNumber(int n){
    
    if(n < 10){
        if(n == 1 || n == 7) return true;

        else return false;
    }
    long long int sum = 0;
    while(n != 0){

        int rem = n % 10;
        sum += rem * rem;

        n /= 10;
    }

    return isNextHappyNumber(sum);
}
int HappyNumber(int n){

    while(n++){
        if(isNextHappyNumber(n)) break;
    }
    return n;
}
int main(){

    int n;
    cin >> n;

    int ans = HappyNumber(n);

    cout << ans;

    return 0;
}