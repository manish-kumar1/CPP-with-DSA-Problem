#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int> &nums){

    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for(int i = 0; i < nums.size(); i++){
        totalSum = totalSum - nums[i];
        if(totalSum == leftSum){
            return i;
        }
        leftSum = leftSum + nums[i];
    }
    return -1;
}
int main(){

    int n;
    cin >> n;

    int v = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> v;
        nums.push_back(v);
    }
    int ans = pivotIndex(nums);
    cout << ans;

    return 0;
}