#include <iostream>
#include <string>

using namespace std;

int main() {
    char x = '*';
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName; 
    return 0;
    }

