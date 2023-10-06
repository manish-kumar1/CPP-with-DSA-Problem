#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
void SelectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int MinIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[MinIdx])
                MinIdx = j;
        }
        swap(arr[MinIdx], arr[i]);
    }
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    SelectionSort(arr,n);
    print(arr, n);
}