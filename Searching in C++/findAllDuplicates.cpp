
#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector<int> findALLDuplicates(vector<int> &nums){

    set<int> st;
    vector<int> v;

    for(int i = 0; i < nums.size(); i++){
        if(st.count(nums[i])){

            // if element is present
            v.push_back(nums[i]);
        }
        else{

            // if element is not present
            st.insert(nums[i]);
        }
    }
    return v;
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
    vector<int> ans = findALLDuplicates(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}