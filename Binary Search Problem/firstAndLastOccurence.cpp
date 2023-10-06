
#include<iostream>
#include<vector>
using namespace std;
int lastOccurence(vector<int> &nums, int k){
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if(nums[mid] < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int firstOccurence(vector<int> &nums, int k){
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] == k){
            ans = mid;
            end = mid - 1;
        }
        else if(nums[mid] < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastOccurence(vector<int> &nums, int k){

    pair<int, int> p;
    p.first = firstOccurence(nums, k);
    p.second = lastOccurence(nums, k);

    return p;
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
    int k;
    cin >> k;

    pair<int, int> ans = firstAndLastOccurence(nums, k);
    cout << ans.first << " "<< ans.second;
    cout << endl;

    return 0;
}