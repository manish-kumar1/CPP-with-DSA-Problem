
#include<iostream>
#include<vector>
using namespace std;

int StockBuyAndSell11(vector<int> &prices){

    int profit = 0;
    for(int i = 1; i < prices.size(); i++){
        
        if(prices[i] > prices[i-1]){
            profit += (prices[i] - prices[i-1]);
        }
    }
    return profit;
}
int main(){

    int n;
    cin >> n;
    int val;

    vector<int> prices;
    for(int i = 0; i < n; i++){
        cin >> val;
        prices.push_back(val);
    }
    int ans = StockBuyAndSell11(prices);
    cout << ans;

    return 0;
}