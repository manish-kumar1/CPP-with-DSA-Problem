#include<iostream>
#include<vector>
using namespace std;

void swapAlternate(vector<int> &nums){

    // int temp = nums[0];
    for(int i = 0; i < nums.size(); i+=2){
        if(nums.size()-1 > i){
            swap(nums[i], nums[i+1]);
        }
        
    }
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
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
    swapAlternate(nums);

    return 0;
}