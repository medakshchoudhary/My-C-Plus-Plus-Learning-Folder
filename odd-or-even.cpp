// (23-6-2023) this is working only for  1-10^6 range of digits

#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout << "Enter an integer to be checked for odd or even : ";
    cin>>numberEntered;
    if (numberEntered%2==1){
        cout << "The number is odd";
    }
    else {
        cout << "The number is even";
    }
    
    return 0;
}
