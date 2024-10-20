#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        cout << i << " ";
    }
    return 0;
}

/*
Output:
1 3 5 7 9 
*/
