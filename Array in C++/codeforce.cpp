#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &leftPocket, vector<int> &rightPocket, int k){
    int ans = 0;
    for(int i = 0; i < leftPocket.size(); i++){
        for(int j = 0; j < rightPocket.size(); j++){
            if(leftPocket[i] + rightPocket[j] <= k){
                ans++;
            }
        }
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        
        int lv = 0;
        vector<int> leftPocket;
        for(int i = 0; i < n; i++){
            cin >> lv;
            leftPocket.push_back(lv);
        }
        int rv = 0;
        vector<int> rightPocket;
        for(int i = 0; i < m; i++){
            cin >> rv;
            rightPocket.push_back(rv);
        }
        int ans = solve(leftPocket, rightPocket, k);
        cout << ans << endl;
    }
    return 0;
}