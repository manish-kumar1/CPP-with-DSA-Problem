
#include<iostream>
#include<vector>
using namespace std;


int NextGreaterDigit(vector<int> &num, int target){
    int left = 0;
    int right = num.size() - 1;

    int ans = 0;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(num[mid] == target){
            left = mid + 1;
        }
        else if(num[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
            ans = mid;
        }
    }
    
    return num[ans];
}
int main(){

    int n;
    int val = 0;

    vector<int> num;
    for(int i = 0; i < n; i++){
        cin >> val;
        num.push_back(val);
    }
    int target;
    cin >> target;

    int result = NextGreaterDigit(num, target);
    cout<<result;

    return 0;

}