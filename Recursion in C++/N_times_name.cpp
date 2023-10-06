
#include<iostream>
using namespace std;

void Name(int n, int i){

    if(i > n)
        return;

    cout<<"Manish"<<endl;
    i++;
    Name(n, i);
}
int main(){

    int n;
    cin>>n;

    int i = 1;
    Name(n, i);
}