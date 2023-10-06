
#include<iostream>
using namespace std;

void checkCharacter(char ch){
    if(ch >= 'a' && ch <= 'z'){
        cout << "Small Character";
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << "Capital Characeter";
    }
    else if(ch >= '0' && ch <= '9'){
        cout << "Digit ";
    }
    else{
        cout << "Symbol";
    }
}
int main(){

    char ch;
    cin >> ch;

    checkCharacter(ch);

    return 0;
}