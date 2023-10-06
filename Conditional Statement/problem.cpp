
#include<iostream>
using namespace std;

int main(){

    int a = 2;
    int b = 4;

    if((a = 4)== b){
        cout << a+b;
    }
    else{
        cout << a + 1;
    }
    return 0;
}