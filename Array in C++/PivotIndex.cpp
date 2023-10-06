#include<bits/stdc++.h>
#include<vector>
using namespace std;

int pivotIndex(vector<int> &arr){
    // sum of all element 
    int rightSum= accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;

    for(int i = 0; i < arr.size(); i++){
        rightSum = rightSum - arr[i];
        if(leftSum == rightSum){
            return i;
        }
        leftSum = leftSum + arr[i];
    }
    return -1;
}
int main(){

    int n;
    cin >> n;

    int val = 0;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> val;
        arr.push_back(val);
    }
    int ans = pivotIndex(arr);
    cout << ans;
}