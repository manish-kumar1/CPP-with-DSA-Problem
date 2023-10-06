

#include<iostream>
using namespace std;

void LeetCode(int n){
    
    if(n == 0) return;

    cout<<n<<" ";
    n--;
    LeetCode(n);

}
int main(){

    int n;
    cin>>n;

    LeetCode(n);
}