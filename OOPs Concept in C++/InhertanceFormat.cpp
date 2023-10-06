
#include<iostream>
using namespace std;

class parent{
    public:
    int parentId;
};
class child : public parent{
    public:
    int childId;
};
int main(){

    child obj;
    obj.parentId = 90;
    obj.childId = 80;

    cout << obj.childId <<endl;
    cout << obj.parentId;

    return 0;
}