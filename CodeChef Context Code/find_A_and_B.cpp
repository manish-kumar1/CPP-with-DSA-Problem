#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    long long x, y, z;
	cin >> T;
	while(T--){
	    cin >> x >> y >> z;
	    
	    if(!(x*y) % z){
	        cout<< (x*y) <<" "<<z <<endl;
	    }
	    else if(!(y*z) % x){
	        cout<< (y*z) << " "<<x<<endl;
	    }
	    else if(!(x*z) % y){
	        cout << (x*z) << " "<< y<<endl;
	    }
	    else{
	        cout <<"-1"<<endl;
	    }
	    
	    
	}
	return 0;
}