
#include<iostream>
#include<vector>

using namespace std;

int NoOfProducts(vector<int> &arr, int DisctAmount){
    int result = 0;
    for(int i : arr){
        if(i > 0 && DisctAmount % i == 0){
            result++;
        }
    }
    return result;
}
int main(){

    int value;

    int NoOfOreder;
    cin >> NoOfOreder;

    vector<int> arr;
    for(int i = 0; i < NoOfOreder; i++){
        cin >> value;
        arr.push_back(value);
    }
    int DisctAmount;
    cin >> DisctAmount;

    int ans = NoOfProducts(arr, DisctAmount);
    cout << ans;

    return 0;
}