#include<iostream>
using namespace std;

int main(){
    int n = 4, a, b;
    int mat[n][n];
    int x = 0,y=0 ,max1 = 0, mx2 = 0;
    for(a= 0; a < n; a++){
    
        for(b = 0; b < n; b++){
            x = x + mat[a][b];
            y = y + mat[b][a];
        }
    }
        if(max1 < x){
            max1 = x;
        }
        if(mx2 < y){
            mx2 = y;
        }
    cout << max1 << " "<< mx2;
    return 0;
}