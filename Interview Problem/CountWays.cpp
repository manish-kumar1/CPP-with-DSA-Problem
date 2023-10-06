

#include<iostream>
using namespace std;

int CountWays(int n){

    // Best case
    if(n == 1 || n == 2){
        return n;
    }
    int reCall1 = CountWays(n - 1);
    int reCall2 = CountWays(n - 2);

    int totalStairs = reCall1 + reCall2;

    return totalStairs;
}
int main(){

    int n;
    cin>>n;

    int Result = CountWays(n);

    cout<<Result;

    return 0;
}