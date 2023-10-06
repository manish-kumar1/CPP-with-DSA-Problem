
#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int k){

    // base case
    if(n == 0)
        return false;
    
    if(arr[0] == k){
        return true;
    }
    else{
        int restPart = linearSearch(arr+1, n-1, k);
        return restPart;
    }

}
int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // cout << *arr;
    
    int k;
    cin >> k;
    int ans = linearSearch(arr, n, k);
    cout << ans;

    return 0;
}