
#include<iostream>
using namespace std;

int BinarySearch(int x){
    int s = 0;
    int e = x;
    long long int ans = -1;
    while(s <= e){
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;
        if(square == x){
            return mid;
        }
        if(square < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
double MorePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < precision; i++){
        factor = factor / 10;
        for(double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}
int sqrtx(int n){
    return BinarySearch(n);
}
int main(){
    int n;
    cin >> n;

    int result = sqrtx(n);
    cout << MorePrecision(n, 3, result);

    return 0;
}