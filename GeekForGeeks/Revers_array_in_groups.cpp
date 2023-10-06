
#include<bits/stdc++.h>

using namespace std;

void print(vector<int> &arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversInGroups(vector<int> &arr, int n, int k){
    for(int i = 0; i < n; i += k){
        if(i + k < n){
            reverse(arr.begin()+i, arr.begin()+i+k);
        }
        else{
            reverse(arr.begin()+i, arr.end());
        }
    }
    print(arr, n);
    return;
}
int main(){
    int n;
    cin >> n;
    int val = 0;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> val;
        arr.push_back(val);
    }
        
    int k;
    cin >> k;
    reversInGroups(arr, n, k);

}