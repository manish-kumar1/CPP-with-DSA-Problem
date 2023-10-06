
#include<iostream>
using namespace std;

int sumOfNaturalNumber(int n){
    int sum = 0;
    while(n >= 1){
        sum += n;
        n--;

        // or formula ->  n(n + 1) / 2
    }
    return sum;
}
int main(){

    int n;
    cin >> n;

    int ans = sumOfNaturalNumber(n);
    cout << ans;

    return 0;
}