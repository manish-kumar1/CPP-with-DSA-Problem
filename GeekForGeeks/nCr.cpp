
#include<iostream>
using namespace std;

int nCr(int n, int r){
    if(r > n) return 0;
    if(n == r || r == 0) return 1;

    int dp[r + 1] = {0};
    dp[0] = 1;
    int modulo = 1e9+7;

    for(int i = 1; i <=n; i++){
        for(int j = min(i, r); j > 0; j--){
            dp[j] = (dp[j] + dp[j - 1]) % modulo;
        }
    }
    return dp[r];
}
int main(){

    int n;
    int r;
    cin >> n;
    cin >> r;

    int ans = nCr(n, r);
    cout<<ans;

    return 0;
}