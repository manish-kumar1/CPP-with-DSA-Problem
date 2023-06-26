
#include<iostream>
using namespace std;

int main(){

    int m = 1;

    int a[4] = {1, 11, 21, 12};

    for(int j = 0; j <= 3; j++){

        if(j - 1 > a[j] + 3){
            break;
        }
        else{
            m = a[j];
        }
    }

    cout<<m;
    
    return 0;
}

// output  12