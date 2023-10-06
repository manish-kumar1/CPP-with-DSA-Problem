
#include<iostream>
#include<vector>
using namespace std;

int LargestElementInArray(vector<int> &arr){
    int largest = arr[0];

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
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

    int ans = LargestElementInArray(arr);
    cout << ans;

    return 0;

}