#include<iostream>
#include<math.h>
using namespace std;


void pow(int n, int x){

    if(x & 1){
        cout <<" yes odd";
    }
    else{
        cout <<"Even ";
    }
}
int main(){
    int n, x;
    cin >> n >> x;

    pow(n , x);
    return 0;
}