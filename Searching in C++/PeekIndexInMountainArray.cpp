
#include<iostream>
#include<vector>
using namespace std;

int PeekIndexInMountain(vector<int> &arr, int n){

    int left = 0;
    int right = n - 1;
    while(left < right){
        int mid = left + (right - left) / 2;

        if(arr[mid] < arr[mid+1]){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return left;
}
int main(){

    int T;
    cin >> T;
    while(T--){

        int n;
        cin >> n;
        int val = 0;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            cin >> val;
            arr.push_back(val);
        }
        int ans = PeekIndexInMountain(arr, n);
        cout << ans <<endl;
    }
}