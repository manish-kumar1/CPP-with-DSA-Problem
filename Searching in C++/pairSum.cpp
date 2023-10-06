#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> pairSum(vector<int> &nums, int sum){

    vector<vector<int>> ans;
    for(int i = 0; i < nums.size(); i++){

        for(int j = i + 1; j < nums.size(); j++){

            if(nums[i] + nums[j] == sum){
                vector<int> temp;
                temp.push_back(min(nums[i], nums[j]));
                temp.push_back(max(nums[i], nums[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
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
    int sum;
    cin >> sum;

    vector<vector<int>> result = pairSum(nums, sum);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}