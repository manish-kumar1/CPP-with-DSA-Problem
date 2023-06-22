

#include<iostream>
using namespace std;

int IsBinaryDivisibleBy3(string s){

    int sum = 0; 
    int temp = 1;

    for(int i = s.length(); i >= 0; i--){

        if(s[i] - '0' == 1){
            sum = (sum + temp) % 3;
        }
        temp = (temp * 2) % 3;
    }
    if(sum == 0) 
        return 1;

    return 0;
}

int main(){

    string s;
    cin >> s;

    int ans = IsBinaryDivisibleBy3(s);
    cout<<ans;
}