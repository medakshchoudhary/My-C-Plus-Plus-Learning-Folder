// sum of n natural numbers using for loop

#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout<<"Enter a number : ";
    cin>>numberEntered;
    int sum = 0;
    for (int i = 1; i<=numberEntered; i++) {
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}
