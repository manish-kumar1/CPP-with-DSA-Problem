
#include<iostream>
#include<vector>
using namespace std;

int RemoveDuplicateFromSortedArray(vector<int> &ar){

    int i = 0;
    for(int j = 1; j < ar.size(); j++){
        if(ar[i] != ar[j]){
            ar[i+1] = ar[j];
            i++;
        }
    }
    return i+1;
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
    RemoveDuplicateFromSortedArray(ar);

    return 0;
}