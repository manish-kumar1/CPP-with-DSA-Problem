
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    bool isPrime = true;
    int i = 2;

    while(n > i){
        if(n % i == 0){
            cout <<n <<" is Composite number";
            isPrime = false;
            break;
        }
        i++;
    }
    if(isPrime == true){
        cout <<n <<" is prime number";
    }
    return 0;
}