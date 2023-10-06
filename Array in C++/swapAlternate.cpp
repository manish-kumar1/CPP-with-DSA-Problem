
#include<bits\stdc++.h>
using namespace std;

void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[5] = {3,2,0,1, 4};
    // int odd[8] = {1,10,12,5,9};

    swapAlternate(even, 5);
    print(even, 5);

    // cout << endl;
    // swapAlternate(odd, 5);
    // print(odd, 5);
}