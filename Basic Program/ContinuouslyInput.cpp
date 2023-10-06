
#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    while(1){

        cin >> n;

        if(n == 0){
            break;
        }
        sum = sum + n;
    }
    cout << sum;
}