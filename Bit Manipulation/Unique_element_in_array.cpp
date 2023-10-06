
#include<iostream>
using namespace std;

int main(){

    int ans = 0;
    int ar[7] = {5, 1, 4, 5, 3, 4, 1};
    for(int i = 0; i < 7; i++){
        
        ans = ans ^ ar[i];
        
    }
    cout << ans;

    return 0;
}