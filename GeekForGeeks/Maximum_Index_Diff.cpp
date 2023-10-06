

#include<iostream>
using namespace std;

int MaxIndexDiff(int arr[], int n){
    
    int maxIndex = 0;
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; --j){

            if(arr[i] <= arr[j]){

                maxIndex = max(j - i, maxIndex);
            }
        }
    }
    return maxIndex;
}
int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = MaxIndexDiff(arr, n);
    cout << ans;

    return 0;
}