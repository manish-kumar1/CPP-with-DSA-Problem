

#include<iostream>
#include<vector>
using namespace std;

int SearchInsert(vector<int> &nums, int target){

    int start = 0;
    int end = nums.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return start;
}
int main(){

    vector<int> nums = {1, 3, 5, 6};
    // int size;
    // cin>>size;
    // for(int i = 0; i < size; i++){
    //     nums.push_back(i);
    // }
    for(int i=0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int target;
    cin>>target;

   int result = SearchInsert(nums, target);
   cout<<result;

   return 0;
}