#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int findDuplicats(vector<int> &nums, int n){
    int ans = -1;
    // vector<int> result;
    for(int i = 0; i < nums.size(); i++){
        ans = ans ^ nums[i];
    }
    for(int i = 1; i < nums.size(); i++){
        ans = abs(ans ^ nums[i]);
    }
    return ans;
}
int main(){

    int n;
    cin >> n;

    int val = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> val;
        nums.push_back(val);
    }

   int result = findDuplicats(nums, n);
   cout << result;

    return 0;
}