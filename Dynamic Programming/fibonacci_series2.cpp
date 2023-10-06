

#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n){

    if(n <= 1)
        return 1;

    vector<int> dp(n+1, 1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];

}
int main(){

    int n;
    cin>>n;

    cout<<fibonacci(n);

    return 0;
}

// Time Complexity - O(n)