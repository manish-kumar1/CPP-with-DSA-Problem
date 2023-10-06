
#include<iostream>
using namespace std;

void isPrime(int n){

    int i = 2;
    bool isPrime = true;

    while(n > i){
        if(n % i == 0){
            cout << "Not a prime number";
            isPrime = false;
            break;
        }
        i++;
    }
    if(isPrime){
        cout << "Prime number";
    }
}
int main(){

    int n;
    cout << "Enter a number to check give numebr is prime or not" <<endl;
    cin >> n;

    isPrime(n);

    return 0;

}