

#include<iostream>
using namespace std;
bool PerfectNumber(int num){
    int sum = 0;
    for(int i = 1; i <= num/2; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }
    if(num == sum)
        return true;
    return false;
}
int main(){

    int num;
    cin >> num;

    int ans = PerfectNumber(num);
    cout<<ans;

    return 0;
}