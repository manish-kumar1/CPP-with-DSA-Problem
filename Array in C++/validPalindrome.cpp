#include<iostream>
using namespace std;

bool checkPalindrome(int nums[], int n){
    int left = 0;
    int right = n - 1;

    while(left < right){
        if(nums[left] != nums[right]){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    bool ans = checkPalindrome(nums, n);
    cout << ans;

    return 0;
}