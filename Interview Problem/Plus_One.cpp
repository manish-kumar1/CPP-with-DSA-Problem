

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &digit, int n){
    for(int i = 0; i < n; i++){
        cout<<digit[i]<<" ";
    }
    cout<<endl;
}
vector<int> PlusOne(vector<int> &digit, int n){
    for(int i = n - 1; i >= 0; i--){
        if(digit[i] < 9){
            digit[i]++;
            return digit;
        }
        digit[i] = 0;
    }
    digit.push_back(0);
    digit[0] = 1;
    return digit;
    
}
int main(){

    int n;
    int v;
    vector<int> digit;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>v;
        digit.push_back(v);
    }
    PlusOne(digit, n);
    print(digit, n);

    return 0;
}