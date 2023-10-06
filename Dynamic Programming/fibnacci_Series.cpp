
#include<iostream>
#include<vector>
using namespace std;
int Solution(int n, vector<int> &DP){

    if(n <= 1) return n;
    if(DP[n] != -1) return DP[n];

    return DP[n] = Solution(n - 1, DP) + Solution(n - 2, DP);
}
int Fibnacci(int n){

    if(n <= 1) return n;
    vector<int> DP(n+1, -1);

    return Solution(n, DP);
}
int main(){

    int n;
    cin >> n;
    cout<<Fibnacci(n);
    return 0;
}

