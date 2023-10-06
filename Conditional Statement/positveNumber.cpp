
#include<iostream>
using namespace std;

void isPositive(int n){
    if(n > 0){
        cout<<n<<" is Positive number ";
    }
    else if(n < 0){
        cout<<n<<" is negative number ";
    }
    else{
        cout<<n<<" is non Positive number ";
    }
}
int main(){

    int n;
    cin>>n;

    isPositive(n);

    return 0;
}