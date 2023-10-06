

#include<iostream>
using namespace std;

int power(int n){
    
    // Base case
    if(n == 0)
        return 1;
    int result = 2 * power(n - 1);

    return result;
}
int main(){

    int n;
    cin>>n;

    int ans = power(n);
    cout<<ans;

    return 0;
}