

#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int j = n-1;
    int ans = 0;
    int a[5] = {1, 3, 5, 7, 9};
    
    for(int i = 0; i < n; i++){
        
        ans = a[j] - a[i];
        break;
        
    }
    cout<< ans;

}