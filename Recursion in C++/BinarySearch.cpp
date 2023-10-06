#include<iostream>
using namespace std;
int BinarySearch(int *arr, int s, int e, int k){

    if(s > e)
        return -1;
    
    int mid = s + (e - s) / 2;

    if(arr[mid] == k){
        return mid;
    }
    else if(arr[mid] < k){
       return BinarySearch(arr, mid+1, e, k);
    }
    else{
       return BinarySearch(arr, s, mid-1, k);
    }
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int ans = BinarySearch(arr,0, n-1,  k);
    cout << ans;

    return 0;
}