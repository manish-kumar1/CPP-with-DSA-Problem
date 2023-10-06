

#include<iostream>
using namespace std;

double POW(double x, int n){

    long int newData = n;
    int isNegative = (n < 0) ? (newData *= -1, 1) : 0;
    double ans = 1.0;

    while(newData != 0){
        if(newData % 2 == 0){
            x *= x;
            newData /= 2;
        }
        else{
            ans *= x;
            newData -= 1;
        }
    }
    if(isNegative){
        ans = 1.0 / ans;
    }
    return ans;
}
int main(){

    double x;
    cin >> x;
    int n;
    cin >> n;

    double result = POW(x, n);
    cout<<result;

    return 0;
}