
#include<iostream>
#include<vector>
using namespace std;

int uniqueElement(vector<int> &nums){
    
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        
        ans = ans ^ nums[i];
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
    int result = uniqueElement(nums);
    cout << result;

    return 0;
}