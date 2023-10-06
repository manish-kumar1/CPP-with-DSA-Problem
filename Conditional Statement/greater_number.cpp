
// #include<iostream>
// using namespace std;

// int main(){

//     int a;
//     int b;

//     cin>>a>>b;

//     if(a > b){
//         cout<<"A is greater than B "<<endl;
//     }
//     else if(a == b){
//         cout<<"A is equal to B ";
//     }
//     else{
//         cout<<"B is greater than A";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

void isGreater(int x, int y){
    if(x > y){
        cout<<"X is Greater than Y ";
    }
    else if(x == y){
        cout<<"X is Equal to Y ";
    }
    else{
        cout<<"Y is Greater than X ";
    }
}
int main(){

    int a, b;
    cin>>a>>b;

    isGreater(a, b);

    return 0;
}