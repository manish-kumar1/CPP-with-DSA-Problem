
#include<iostream>
using namespace std;

int main(){

    int ar[] = {12, 3, 6, 2, 6, 7};
    
    int size = sizeof(ar)/sizeof(ar[0]);
    int sum = 9;
    int low = 0;
    int high = size - 1;

    while(low < high){

        for(int i=0; i<size; i++){
            if(ar[low] + ar[high] > sum){
                high--;
                low++;
            }
            else if(ar[low] + ar[high] < sum){
                // high--;
                low++;
            }
            else if(ar[low] + ar[high] == sum){

                cout<<"pair( "<<ar[low]<<", "<<ar[high]<<" )"<<endl;
                cout<<"index( "<<low<< ", "<<high<<" )";
                low++;
                high--;
            }
        }
    }
    return 0;
}