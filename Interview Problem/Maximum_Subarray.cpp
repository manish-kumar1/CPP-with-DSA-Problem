

#include<iostream>
#include<vector>
using namespace std;

int MaximumSubarray(vector<int> &nums){
    int sum = 0;
    int max_sum = nums[0];

    for(int i = 0; i < nums.size(); i++){
        sum = sum + nums[i];

        if(sum > max_sum){
            max_sum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return max_sum;
}
int main(){

    int size; 
    int value = 0;
    vector<int> nums;

    cin>>size;
    for(int i = 0; i < size; i++){
        cin>>value;
        nums.push_back(value);
    }
    int ans = MaximumSubarray(nums);
    cout<<ans;
    return 0;
}