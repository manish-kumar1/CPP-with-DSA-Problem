#include<bits\stdc++.h>
#include<iostream>
using namespace std;

long long CountTripletSumSmallerX(int arr[], int n, int X){

    sort(arr, arr+n);
    int count=0;

    for(int i = 0; i < n; i++){

        int left = i + 1;
        int right = n - 1;

        while(left < right){
            
            long long ans = arr[i] + arr[left] + arr[right];
            if(ans > X){
                count++;
            }
            else if(ans < X){
                left++;
            }
            else{
                right--;
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
    int X;
    cin >> X;
    int result = CountTripletSumSmallerX(arr, n, X);
    cout << result;
    return 0;
}