
#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n){
	int ans = INT_MAX;
	for(int i = 0; i < n; i++){
		ans = min(ans, arr[i]);
	}
	return ans;
}
int getMax(int arr[], int n){
	int ans = INT_MIN;
	for(int i = 0; i < n; i++){
		if(arr[i] > ans){
			ans = arr[i];
		}
	}
	return ans;
}
int main(){
	
	int n;
	cin >> n;

	int arr[20];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int max = getMax(arr, n);
	cout << max;

	int min = getMin(arr, n);
	cout << min;

	return 0;
}
