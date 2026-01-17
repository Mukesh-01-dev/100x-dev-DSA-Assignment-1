#include <iostream>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
     
    int rem1 = a % 10;
    int rem2 = b % 10;
    int res = rem1 + rem2;
    
    cout << res;
    
    return 0;
}