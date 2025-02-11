#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
    
    int n;
    vector<string> v;
    string str;
    int count = 0;
 
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        v.push_back(str);
    }
 
    for (const string &s : v) {
       int x = s.length();
       if((s[0]=='+' && s[1]=='+') || (s[x-2]=='+' && s[x-3])){
           count++;
       }else{
           count--;
       }
    }
    cout << count << endl;
 
    return 0;
}
