
#include<iostream>
#include<string>
using namespace std;

int LengthOfLastWorld(string str){
    int result = 0;
    int n = str.size();
    bool flag = false;
    for(int i = n - 1; i >= 0; i--){
        if(str[i] == ' ' && flag == true){
            break;
        }
        else if(str[i] != ' '){
            flag = true;
            result++;
        }
    }
    return result;
}
int main(){

    string str;
    getline(cin, str);

    int ans = LengthOfLastWorld(str);
    cout<<ans;
    return 0;
}