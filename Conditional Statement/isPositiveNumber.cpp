
#include<iostream>
using namespace std;

void isPositiveNumber(int n){

    if(n > 0){
        cout << "positive number";
    }
    else if(n < 0){
        cout << "negative number";
    }
    else{
        cout << "non negative number";
    }
}
int main(){

    int n;
    cin >> n;

    isPositiveNumber(n);

    return 0;
}