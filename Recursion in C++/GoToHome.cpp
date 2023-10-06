

#include<iostream>
using namespace std;

void GOtoHoMe(int src, int dest){

    cout<<"Source "<<src <<" "<<"destination "<<dest <<endl;
    // Base case
    if(src == dest){
        cout<<"I reach at Home";
        return;
    }
    src++;
    GOtoHoMe(src, dest);
}
int main(){

    int src = 1;
    int dest;

    cin >> dest;

    GOtoHoMe(src, dest);

    return 0;
}