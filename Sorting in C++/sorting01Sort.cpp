
#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void sorting01Sort(int arr[], int n){

    int left = 0;
    int right = n - 1;

    while(left < right){

        while(arr[left] == 0 || arr[left] == 1 && left < right){
            left++;
        }
        while(arr[right] == 2 && left < right){
            right--;
        }
        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sorting01Sort(arr, n);
    print(arr, n);

    return 0;
}