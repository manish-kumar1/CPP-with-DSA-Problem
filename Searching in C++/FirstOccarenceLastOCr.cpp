
#include<iostream>
using namespace std;

int firstOccarence(int arr[], int n, int key){
    int left = 0;
    int right = n-1;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == key){
            ans = mid;
            right = mid - 1;
        }
        if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}
int secondOccarence(int arr[], int n, int key){
    int left = 0;
    int right = n-1;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left ) / 2;
        if(arr[mid] == key){
            ans = mid;
            left = mid + 1;
        }
        else if(arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}
int main(){

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int key;
        cin >> key;
        
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        int first = firstOccarence(arr, n, key);
        cout << first <<" ";
        int second = secondOccarence(arr, n, key);
        cout << second << " ";
        cout <<endl;
    }
    return 0;
}