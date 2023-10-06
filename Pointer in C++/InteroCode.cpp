
#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*
    int num = 5;
    cout << num << endl;

    // address of Operator - &
    cout << "address of num is " << &num << endl;

    int *ptr = &num;
    cout << "address is : " << ptr <<endl;
    cout << "value is : " << *ptr <<endl;
    cout << num << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << d << endl;
    cout << "Address is: " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << "size of integer is " << sizeof(num) <<endl;
    cout << "size of pointer is " << sizeof(ptr) << endl;
    cout << "size of pointer is " << sizeof(p2) << endl;
    cout << "size of double is " << sizeof(d) << endl;

    */
   /*
    int i = 5;
    int *q = &i;

    cout << i << endl;
    cout << q << endl;  // address of i
    cout << *q << endl;  // value of i

    int *p = 0;
    p = &i;

    cout << p <<endl;   // address of i
    cout << *p << endl;  // value of i

    int n = 10;
    int a = n;
    a++;
    cout << n << endl;

    int *r = &n;
    cout << "before "<< n << endl;
    (*r)++;
    cout << "after " << n << endl;
    cout << a << endl;

    // copying a pointer
    int *Q = p;
    cout << p << " - " << Q << endl;
    cout << *p << " - " << *Q << endl;

    */

   // important concept
    int i = 3;
    int *t = &i;
    (*t)++;  // *t = *t + 1;

    cout << i << endl;  // 4
    cout << *t << endl;  // 4

    cout << "before t : " << t << endl;
    t = t + 1;
    cout <<" after t "<< t << endl;
    
    return 0;
}