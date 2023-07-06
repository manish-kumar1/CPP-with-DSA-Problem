
#include<iostream>
using namespace std;

int CountPairSum(int arr[], int n, int k){

    int count = 0;
    int sum = 0;

    for(int i = 0; i < n; i++){

        for(int j = 1; j < n; j++){

            sum = arr[i]+arr[j];

            if(sum == k){

                count++;
            }
        }
    }
    return count;
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
    int ans = CountPairSum(arr, n, k);
    cout << ans;
    return 0;
}