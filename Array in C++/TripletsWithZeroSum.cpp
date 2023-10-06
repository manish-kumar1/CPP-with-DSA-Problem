#include<bits\stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    bool findTriplets(int arr[], int n){

        sort(arr, arr+n);

        for(int i = 0; i < n; i++){
            int left = i + 1;
            int right = n - 1;
            while(left < right){
                int sum = arr[i]+arr[left]+arr[right];
                if(sum == 0) return true;
                else if(sum > 0) 
                    right--;
                else{
                    left++;
                }
            }
        }
        return false;

    }
};
int main(){

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;

        int arr[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        Solution obj;
        if(obj.findTriplets(arr, n)){
            cout << "1" <<endl;
        }
        else{
            cout << "0" <<endl;
        }
    }
    return 0;
}