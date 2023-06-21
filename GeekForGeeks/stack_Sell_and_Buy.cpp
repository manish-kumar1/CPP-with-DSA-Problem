

#include<iostream>
using namespace std;

int main(){

    int n = 6;
    int j = n-1;
    int ans = 0;
    int a[6] = {7,1,5,3,6,4};
    int maxi = 0;
    for(int i = 0; i <n/2; i++){
        
        maxi = max(maxi, a[j] - a[i]);
        j--;
    }
    cout<< maxi;
    return 0;
}