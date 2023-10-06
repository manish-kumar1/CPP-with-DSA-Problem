
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n & 1){
        cout << n<<" is Odd number";
    }
    else{
        cout << n << " is Prime number";
    }
    return 0;
}