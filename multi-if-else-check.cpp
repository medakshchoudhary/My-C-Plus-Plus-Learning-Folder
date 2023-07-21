#include <iostream>
using namespace std;

int main() {
    int enteredNumber;
    cout << "Enter a number : ";
    cin>>enteredNumber;
    if (enteredNumber==3) {
        cout << "Entered number is 3";
    }
    else if (enteredNumber== 1,2,4,5,6,7,8){
        cout << "Entered number is either 1,2,4,5,6,7 or 8";
    }
    else {
        cout << "Entered number is 9 or greater";

    }

    return 0;
}