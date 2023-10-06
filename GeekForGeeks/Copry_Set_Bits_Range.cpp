
#include<iostream>
using namespace std;

int Copy_Set_Bits_Range(int x, int y, int left, int right){
    left--;
    right--;
    cout<<left<<endl;
    int temp;
    for(int i = left; i <= right; i++){
        temp = (1 << i);
        if(y & temp){
            x = x | (y & temp);
        }
    }
    cout<<temp<<endl;
    return x;
}
int main(){

    int x, y, left, right;
    cin >> x >> y >> left >> right;

    int ans = Copy_Set_Bits_Range(x, y, left, right);
    cout<< ans;

    return 0;
}