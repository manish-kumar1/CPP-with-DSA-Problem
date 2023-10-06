#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){

    //base case
    if(n == 0) {
        return;
    }

    // processing 
    int digit = n % 10;
    n = n / 10;

    // Recursive call
    sayDigit(n , arr);
    cout << arr[digit] << " ";
}
int main(){

    int n;
    cin >> n;

    string arr[] = {"zero","one", "two" , "three", "four", "five", "six",
                    "seven", "eight", "nine"};

    sayDigit(n, arr);

    return 0;
}