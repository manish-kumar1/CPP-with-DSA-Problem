#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1,3,5,6,7};
    int sum = accumulate(arr.begin(),arr.end(), 0);
    cout << sum;
}