#include <iostream>
using namespace std;

int main(){    
    int myAge;
    int votingAge = 18;
    cout << "Enter Your Age : ";
    cin >> myAge;
    if (myAge >= votingAge){
        cout << "Eligible to vote";
    } 
    else {
        cout << "Not eligible to vote yet";
    }
    int number;

    // do loop 
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number <= 0);

    cout << "You entered a positive number: " << number << endl;

}