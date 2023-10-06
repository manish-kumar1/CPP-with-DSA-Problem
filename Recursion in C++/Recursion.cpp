

#include<iostream>
using namespace std;

void Recursion(int n){

    if(n < 1 )
        return;
    n--;
    Recursion(n);
    cout<<"Manish"<<endl;
}
int main(){

    int n;
    cin>>n;

    Recursion(n);

    return 0;
}