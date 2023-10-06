
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            left = mid + 1; 
        }
        else{
            right = mid - 1;
        }
        mid = left + (right - left)/ 2;
    }
    return -1;
}
int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int ans = BinarySearch(arr, n, key);
    cout << ans;

    return 0;
}