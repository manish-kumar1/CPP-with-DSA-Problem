

#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &v, int n, int target){

    int low = 0;
    int high = n - 1;
    
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] == target){
            return mid;
        }
        else if(v[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    
    int n;
    cin >> n;
    int val = 0;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> val;
        v.push_back(val);
    }
    int target;
    cin >> target;

    int result = BinarySearch(v, n, target);
    cout<<result;

    return 0;
}