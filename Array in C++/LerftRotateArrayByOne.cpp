
#include<iostream>
#include<vector>
using namespace std;

void leftRotateArrayByOne(vector<int> &arr){
    // vector<int> ans;
    int temp = arr[0];
    for(int i = 1; i < arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = temp;
    
    // ans = arr;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }
    
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
    leftRotateArrayByOne(arr);
    return 0;
}