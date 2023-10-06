

#include<iostream>
#include<vector>
using namespace std;

char NextGreaterLetter(vector<char> &letters, int target){
    int left = 0;
    int right = letters.size() - 1;
    int ans = 0;

    while(left <= right){
        int midElement = left + (right - left) / 2;

        if(letters[midElement] == target){
            left = midElement + 1;
        }
        else if(letters[midElement] < target){
            left = midElement + 1;
        }
        else{
            right = midElement - 1;
            ans = midElement;
        }
    }
    return letters[ans];
}
int main(){

    char ch = ' ';
    vector<char> letters;
    int size;
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> ch;
        letters.push_back(ch);
    }

    int target;
    cin >> target;

    char result = NextGreaterLetter(letters, target);

    cout<<result;

    return 0;
}