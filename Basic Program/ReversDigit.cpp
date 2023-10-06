
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int temp = 0;
    while(n != 0){

        int rem = n % 10;
        temp = (temp * 10) + rem;
        n /= 10;
    }
    cout << temp ;
    return 0;
}