

#include<iostream>
using namespace std;

void Print(int n, int i){
    if(n < i) return;

    cout<<i<<" ";
    i++;
    Print(n, i);
}
int main(){

    int n;
    cin>>n;

    Print(n, 1);

}
