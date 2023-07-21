// not working above 31
#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout << "Enter a number to get it's factorial : ";
    cin>>numberEntered;
    int factorial = 1;
    int i = 1;
    while(i<=numberEntered) {
        factorial = factorial*i;
        i++;
        // cout<<factorial<<endl; // for factorial of n factorial individually 
    }
    cout<<factorial;
    return 0;
}