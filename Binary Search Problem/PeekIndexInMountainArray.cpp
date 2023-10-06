
#include<iostream>
#include<vector>
using namespace std;

int peekIndexMountainArray(vector<int> &nums){
    int left = 0;
    int right = nums.size() - 1;

    while(left < right){

        int mid = left + (right - left) / 2;
        if(nums[mid] < nums[mid+1]){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return left;
}
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int v = 0;
        vector<int> nums;
        for(int i = 0; i < n; i++){
            cin >> v;
            nums.push_back(v);
        }
        int ans = peekIndexMountainArray(nums);
        cout << ans << endl;
    }
    return 0;
}