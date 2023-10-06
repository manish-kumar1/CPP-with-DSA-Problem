

#include<iostream>
#include<unordered_map>
using namespace std;

int firstElementOccurKTimes(int a[], int n, int target){
    
    unordered_map<int, int> test;
    int result = -1;

    for(int i = 0; i < n; i++){
        test[a[i]]++;
        if(test[a[i]] == target){
            result = a[i];
            break;
        }
    }
    return result;

}
int main(){

    int n;
    cin >> n;

    int a[10];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int target;
    cin >> target;

    int ans = firstElementOccurKTimes(a, n, target);
    cout<<ans<<endl;

    return 0;
}