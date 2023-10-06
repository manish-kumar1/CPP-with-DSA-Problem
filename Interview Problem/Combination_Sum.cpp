
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &candidates, vector<int> temp){
    for(int i = 0; i < candidates.size(); i++){
        cout<<temp[i]<<" ";
    }
}
void LeetCode(vector<int> &candidates, int target, int i, int currentSum, vector<int> temp){
    vector<vector<int>> result;
    if(currentSum > target)
        return;
    if(i == candidates.size()){
        if(currentSum == target){
            result.push_back(temp);
        }
        return;
    }
    currentSum = currentSum + candidates[i];
    temp.push_back(candidates[i]);
    LeetCode(candidates, target, i, currentSum, temp);
    currentSum = currentSum - candidates[i];
    temp.pop_back();

    LeetCode(candidates, target, i+1, currentSum, temp);
}
vector<vector<int>> CombinationSum(vector<int> &candidates, int target){
    vector<vector<int>>result;
    
    vector<int> temp;
    LeetCode(candidates, target, 0, 0, temp);
    
    return result;
}

int main(){
    int n;
    int val;
    cin>>n;
    vector<int> candidates;
    for(int i = 0; i < n; i++){
        cin>>val;
        candidates.push_back(val);
    }
    int target;
    cin>>target;
    vector<int> temp;
    CombinationSum(candidates, target);
    print(candidates, temp);


    return 0;
    
}