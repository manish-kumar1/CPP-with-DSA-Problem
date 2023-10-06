#include<bits\stdc++.h>
#include<iostream>
using namespace std;

void leftRotateWithKPlace(int arr[], int n, int k){
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}
int main(){
    int n;
    cout << "Enter the size of Array:"<<endl;
    cin >> n;
    cout << "Enter array Element: "<<endl;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter the K value for rotate array element:"<<endl;
    cin >> k;

    leftRotateWithKPlace(arr, n, k);
    cout << "Output is this:"<<endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}