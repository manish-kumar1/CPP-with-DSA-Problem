
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int four_Sum(vector<vector<int>> &nums, int target){
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for(int i = 0; i < n - 3; i++){
            if(i > 0 && nums[i] == nums[i + 1]){
                continue;
            }
            for(int j = i + 1; j < n - 2; j++){
                if(j > i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }
                int Tsum = target - (nums[i] + nums[j]);
                int lt = j + 1, ht = n - 1;
                while(lt < ht){
                    if((nums[lt] + nums[ht]) == target){
                        vector<int> onsResult = {nums[i],nums[j],nums[lt],nums[ht]};
                        result.push_back(onsResult);
                    
                        while(lt < ht && nums[lt] == nums[lt + 1]){
                            lt++;
                        }
                        while(lt < ht && nums[ht] == nums[ht -1]){
                            ht--;
                        }
                        lt++;
                        ht++;
                    }
                    else if(nums[lt] + nums[ht] < Tsum){
                        lt++;
                    }
                    else{
                        ht--;
                    }
                }
            }
        }
        return result;
    }
};
main(){

    Solution ob;
    vector<int> 
}