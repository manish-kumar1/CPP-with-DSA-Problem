
#include<bits/stdc++.h>
using namespace std;


int divided(int dividend, int divisor){

    if(dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    if(dividend == INT_MIN && divisor == 1)
        return INT_MIN;
    
    long int dd = abs(dividend);
    long int dv = abs(divisor);

    int result = 0;

    while(dv <= dd){
        long int sum = dv;
        long int count = 1;

        while(sum <= dd - sum){
            sum += sum;
            count += count; 
        }
        result += count;
        dd -= sum;
    }
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
        return -result;
    }
    return result;
}

int main(){

    int dividend;
    cin>>dividend;

    int divisor;
    cin>>divisor;

    int result = divided(dividend, divisor);
    cout<<result;

    return 0;
}