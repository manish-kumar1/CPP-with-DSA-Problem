
#include<iostream>
#include<vector>
using namespace std;

int KthSmallestStock(vector<int> &stock, int k){

    int result = 0;
    for(int i = 0; i < stock.size(); i++){
        if(stock[i] < stock[i+1]){
            swap(stock[i], stock[i+1]);
        }
    }
    for(int i = 0; i < stock.size(); i++){
        cout << stock[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;

    int value = 0;
    vector<int> stock;

    for(int i = 0; i < n; i++){
        cin >> value;
        stock.push_back(value);
    }

    int k;
    // cin >> k;

    int ans = KthSmallestStock(stock, k);
    cout << ans;

    return 0;

}