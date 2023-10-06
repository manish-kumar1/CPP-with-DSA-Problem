
#include<iostream>
using namespace std;;

bool checkPalidrome(string str, int i, int j){
    
    // base case 
    if(i > j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalidrome(str, i+1, j-1);
    }
}
int main(){

    string name = "BookkooB";


    bool ans = checkPalidrome(name, 0, name.length()-1);
    // cout << ans;
    if(ans){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palidrome";
    }
    return 0;

}