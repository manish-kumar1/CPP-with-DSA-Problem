

#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> nums, int counter){
    for(int i = 0; i < counter; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int RemoveElement(vector<int> &nums, int val){
    int counter = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            nums[counter] = nums[i];
            counter++;
        }
        else{
            continue;
        }
    }
    print(nums,counter);
    return counter;
}
int main(){


    int value = 0;
    int size;      // size of vector

    vector<int> nums;   // intilize the vector nums
    cin>>size;

    for(int i = 0; i < size; i++){
        cin>>value;          // data taken by user
        nums.push_back(value);    // push the data in vector
    }
    int val;    // val is remove element you want 
    cin>>val;

    int ans = RemoveElement(nums, val);
    cout<<ans<<endl;
}