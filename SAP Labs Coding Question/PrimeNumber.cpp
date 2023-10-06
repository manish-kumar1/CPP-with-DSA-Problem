
#include<iostream>
using namespace std;

int main(){

    int n; 
    cin >> n;
    int i = 2;
    bool isPrime = true;

    while(n > i){
        if(n % i == 0){
            cout <<n<<" is not prime number";
            isPrime = false;
            break;
        }
        i++;
    }
    if(isPrime == true){
        cout <<n<<" is prime number";
    }
    return 0;
}