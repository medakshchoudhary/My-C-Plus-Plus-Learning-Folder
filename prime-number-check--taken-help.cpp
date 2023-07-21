#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout<<"Enter a number for prime check : ";
    cin>>numberEntered;
    bool isPrime = true;
    int i = 2;

    while (i<=numberEntered/2) {
        if (numberEntered % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime && numberEntered>1){
        cout<<"Entered number is prime";

    }
    else{
        cout<<"Entered number is not prime";

    }

    return 0;
}