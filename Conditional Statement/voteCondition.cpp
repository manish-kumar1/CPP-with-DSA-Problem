
#include<iostream>
using namespace std;

void voteCondition(int age){
    if(age >= 18){
        cout<<"You are Eligible for Vote ";
    }
    else if(age >= 16 && age <= 17){
        cout<<"You should wait 2 years for Vote";
    }
    else{
        cout<<"You are not Eligible for Vote";
    }
}
int main(){

    int age;
    cin>>age;

    voteCondition(age);
}