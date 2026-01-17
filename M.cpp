#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;
    
    if (marks > 34) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }
    
    return 0;
}