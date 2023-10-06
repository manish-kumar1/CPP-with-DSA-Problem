
#include<iostream>
#include<vector>
using namespace std;

int findTarget(vector<int> nums, int target){

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
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
    int target;
    cin >> target;

    int ans = findTarget(nums, target);
    cout << ans;

    return 0;
}