
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){

        int j = 1;

        while(i >= j){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    // ----------------
    // int n; cin >> n;
    // for(int i = 1; i <= n; i++){

    //     for(int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    return 0;
}