#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> MaxRevenueDays(int days, int products, vector<vector<int>>& SalesRecord) {
    vector<int> MaxRevenuePerDays;

    for (int i = 0; i < days; ++i) {
        
        vector<int>& SalesCurDays = SalesRecord[i];
        int max_revenue = *max_element(SalesCurDays.begin(), SalesRecord.end());
        
        MaxRevenuePerDays.push_back(max_revenue);
    }

    return MaxRevenuePerDays;
}

int main() {
    int days, products;
    cin >> days >> products;

    vector<vector<int>> SalesRecord(days, vector<int>(products));

    for (int day = 0; day < days; ++day) {
        for (int product = 0; product < products; ++product) {
            cin >> SalesRecord[day][product];
        }
    }

    vector<int> result = MaxRevenueDays(days, products, SalesRecord);

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}