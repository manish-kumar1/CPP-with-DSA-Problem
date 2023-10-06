
#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    // q.push(2);
    // q.push(9);
    // q.push(5);
    q.push(8);

    cout << q.size() << endl;

    if(q.empty()){
        cout << "Yes Queue is empty";
    }
    else{
        "No Queue is Not empty";
    }
    

    return 0;
}