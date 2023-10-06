#include<bits\stdc++.h>
#include<vector>
using namespace std;

int secondLargest(vector<int> &ar){
    int Largest = ar[0];
    int sLargest = -1;

    for(int i = 1; i < ar.size(); i++){
        if(ar[i] > Largest){
            sLargest = Largest;
            Largest = ar[i];
        }
        else if(ar[i] < Largest && ar[i] > sLargest){
            sLargest = ar[i];
        }
    }
    return sLargest;
}
int secondSmallest(vector<int> &ar){
    int smallest = ar[0];
    int sSmallest = INT_MAX;

    for(int i = 1; i < ar.size(); i++){
        if(ar[i] < smallest){
            sSmallest = smallest;
            smallest = ar[i];
        }
        else if(ar[i] != smallest && ar[i] < sSmallest){
            sSmallest = ar[i];
        }
    }
    return sSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> ar) {
  // Write your code here.
  int sLargest = secondLargest(ar);
  int sSmallest = secondSmallest(ar);
    return {sLargest, sSmallest};
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
    int large = secondLargest(ar);
    cout << large << " ";
    int small = secondSmallest(ar);
    cout << small;

    return 0;
}