#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

bool isPosibleSolution(vector<int> &stalls, int k, int mid){
    int cowsCount = 1;
    int lastPosition = stalls[0];

    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - lastPosition >= mid){
            cowsCount++;
            if(cowsCount == k){
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k){
    
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s) / 2;
        if(isPosibleSolution(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
int main(){
    
    int T;
    cin >> T;
    while(T--){

        int n, k;
        cin >> n >> k;

        int val = 0;
        vector<int> stalls;
        for(int i = 0; i < n; i++){
            cin >> val;
            stalls.push_back(val);
        }
        int result = aggressiveCows(stalls, k);
        cout << result << " ";
    }

    return 0;
}