
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    int nextNumber = 0;
    cout << a << " " << b << " ";
    for(int i = 1; i <= n; i++){
        nextNumber = a + b;
        cout << nextNumber<< " ";
        a = b;
        b = nextNumber;
    }
    return 0;
}