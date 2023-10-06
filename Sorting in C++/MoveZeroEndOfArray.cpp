
#include<iostream>
#include<vector>
using namespace std;

vector<int> MoveZeroEndOfArray(vector<int> &nums, int n){

    int j = -1;
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return nums;
    for(int i = j + 1; i < n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
    return nums;
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
    MoveZeroEndOfArray(nums, n);
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}