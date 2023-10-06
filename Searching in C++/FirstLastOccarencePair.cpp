#include<iostream>
#include<vector>
using namespace std;
int firstOccr(vector<int> &arr, int n, int key){
    int left = 0;
    int right = n-1;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == key){
            ans = mid;
            right = mid - 1;
        }
        if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}
int secondOccr(vector<int> &arr, int n, int key){
    int left = 0;
    int right = n-1;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left ) / 2;
        if(arr[mid] == key){
            ans = mid;
            left = mid + 1;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int key){
    pair<int, int> p;
    p.first = firstOccr(arr, n, key);
    p.second = secondOccr(arr, n, key);
    // cout << p.first << " "<< p.second <<endl;
    return p;
}
int main(){

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int key;
        cin >> key;
        
        int val = 0;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            cin >> val;
            arr.push_back(val);
        }

        pair <int, int> r = firstAndLastPosition(arr, n, key);
        cout <<r.first<<" "<<r.second<<endl;

    }
    return 0;

}