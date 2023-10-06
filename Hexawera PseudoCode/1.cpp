

#include<iostream>
using namespace std;

int funn(int a, int b){
    if((b^a)<(2-b)&&(a-b)>(a-b)){
        b = (a+1)+a;
        b = 2+2+a;
        return funn(a+1, a);
    }
    else{
        return a+1;
    }
}
int main(){

    int a = 1, b = 0;
    int ans = funn(a, b);
    cout<<ans;
}