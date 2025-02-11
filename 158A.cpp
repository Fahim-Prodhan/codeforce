#include <iostream>
 
using namespace std;
 
int main() {
    
    int n;
    int score;
    int position;
    int count = 0;
    
    cin >> n;
    cin >> position;
    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    
    score = arr[position-1];
    
    for(int j = 0; j<n; j++){
        if(arr[j] > 0 && arr[j] >= score){
            count++;
        }
    }
    
    cout << count << endl;
   
    return 0;
}
