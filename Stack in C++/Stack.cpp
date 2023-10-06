
#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> num;
    num.push(4);
    num.push(2);
    num.push(7);
    num.push(6);

    int a = num.top();
    cout << a << endl; // 6

    int b = num.size();
    cout << b << endl;  // 4

    num.pop();
    int x = num.size();
    cout << x;  // 3

    return 0;
}