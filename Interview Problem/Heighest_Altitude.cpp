
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int longestAltitudes(vector<int> &gain){
        int previous = 0;
        int maximum = 0;

        for(int i = 0; i < gain.size(); i++){
            previous = previous + gain[i];
            if(previous > maximum)
                maximum = previous;
        }
        return maximum;
    }
};
int main(){

    vector<int> v = {-5, 1, 5, 0, -7};
    Solution s;
    cout<<s.longestAltitudes(v);

    return 0;
}