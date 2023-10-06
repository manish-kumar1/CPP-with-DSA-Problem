
#include<iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    char i = 'a';

    while(i <= ch){
        char j = 'a';

        while(j <= ch){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}