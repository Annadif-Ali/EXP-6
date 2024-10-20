#include <iostream>
using namespace std;

int main() {
    string password;
    string correctPassword = "password123";  // Example correct password

    for (int attempts = 0; attempts < 3; ++attempts) {
        cout << "Enter password: ";
        cin >> password;

        if (password == correctPassword) {
            cout << "Access granted." << endl;
            return 0;
        } else {
            cout << "Incorrect password. Try again." << endl;
        }
    }
    
    cout << "Access denied. Too many incorrect attempts." << endl;
    return 0;
}

/*
Output Example:
Enter password: pass
Incorrect password. Try again.
Enter password: password123
Access granted.
*/
