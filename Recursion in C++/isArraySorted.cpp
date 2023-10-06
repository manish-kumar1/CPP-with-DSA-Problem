#include<iostream>
using namespace std;

bool isSortedArray(int *arr, int n){

    // base case
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool restPart = isSortedArray(arr+1, n-1);
        return restPart;
    }
}
int main(){

    int arr[] = {1,2,3,5,6,7};

    bool ans = isSortedArray(arr, 6);
    
    cout << ans;
    // if(ans){
    //     cout << "Array is Sorted"<<endl;
    // }
    // else{
    //     cout << "Not Sorted";
    // }

    return 0;
    

}