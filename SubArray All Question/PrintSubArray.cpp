
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n];
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    cout<<endl<<"Printing subArray: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                cout<<ar[k]<<" ";
            }
            cout << endl;
        }
    }
    // int max = INT_MAX;
    // cout << max;
    return 0;
}