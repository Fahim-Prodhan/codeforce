#include <iostream>
 
using namespace std;
 
int main() {
    
    int n[2];
    
    for(int i = 0; i < 2; i++){
        cin >> n[i];
    }
    
    int mult = n[0] * n[1];
    
    int rslt = mult/2;
    
    cout << rslt << endl;
   
    return 0;
}
