
#include<iostream>
#include<vector>
using namespace std;

int LongestSubarray(vector<int> &nums){
    int i = 0, j = 0;
    int lastZeroIdx = -1;
    int result;

    while(j < nums.size()){
        if(nums[j] == 0){
            i = lastZeroIdx + 1;
            lastZeroIdx = i;
        }
        result = max(result, j-i);
        j++;
    }
    return result;
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
    int ans = LongestSubarray(nums);
    cout << ans;

    return 0;
}