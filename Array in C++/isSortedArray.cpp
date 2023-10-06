
#include<iostream>
#include<vector>
using namespace std;
bool isSortedArray(vector<int> &ar){

    for(int i = 1; i < ar.size(); i++){
        if(ar[i] >= ar[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){

    int n;
    cin >> n;

    int val = 0;
    vector<int> ar;
    for(int i = 0; i < n; i++){
        cin >> val;
        ar.push_back(val);
    }
    bool isSorted = isSortedArray(ar);
    cout << isSorted;

    return 0;

}