#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    int min, max;
    
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    if (c < min){
        min = c;
    }
        
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    if (c > max){
        max = c;
    }
    
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    
    return 0;
}