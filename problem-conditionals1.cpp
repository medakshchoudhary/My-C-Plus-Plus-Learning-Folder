// Program to print the value if it is even and divisible by 3
#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout << "Enter the number to check if it is even and divisible by 3 : ";
    cin >> numberEntered;
    if (numberEntered%2==0 && numberEntered%3==0){
        cout<<"Entered number is even and is divisible by 3";
    }
    else if (numberEntered%2==0 && numberEntered%3!=0){
        cout<<"Entered number is even but not divisible by 3";
    }
    else if (numberEntered%2==1 && numberEntered%3==0) {
        cout<<"Entered number is not even but divisible by 3";
    }
    else{
        cout<<"Entered number is not even and not divisible by 3";
    }
    return 0;
}