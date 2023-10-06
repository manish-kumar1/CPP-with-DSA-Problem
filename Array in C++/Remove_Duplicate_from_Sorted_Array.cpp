
#include<iostream>
using namespace std;

void print(int ar[], int s){
    for(int i = 0; i < s - 1 ; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int RemoveDuplicate(int ar[], int size){

    int j = 1;
    for(int i = 0; i < size - 1; i++){
        if(ar[i] != ar[i+1]){
            ar[j] = ar[i+1];
            j++;
        }
    }
    
    return j;
}
int main(){

    int ar[] = {0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(ar) / sizeof(ar[0]);
    int result = RemoveDuplicate(ar, size);
    print(ar, size);
    cout<<result<<" ";
    return 0;
}