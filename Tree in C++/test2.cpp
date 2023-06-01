#include<iostream>
#include<vector>
using namespace std;
int function(vector<int> &nums){
    int n = nums.size();

    if 1 not in nums: return 1

    for i = 0 to n-1:

    if nums[i] <= 0 or nums[i] > n: nums[i] = 1

    for i = 0 to n-1:

    a = abs(nums[i])

    if a == n:

    nums[0] = abs(nums[0])

    else:

    nums[a] = -abs (nums[a])

    for i = 1 to n-1:

    if nums[i] > 0:

    return i

    if nums[0] > 0:

    return n

    return n + 1
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
    int ans = function(nums);
    cout << ans;

    return 0;
}