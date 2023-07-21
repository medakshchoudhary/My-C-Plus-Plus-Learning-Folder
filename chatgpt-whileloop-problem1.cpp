// Write a program that takes an integer as input from the user and continuously divides it by 2 until the result is less than 1. The program should then output the number of divisions performed.

#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout<<"Enter an integer value : ";
    cin>>numberEntered;
    numberEntered = double(numberEntered);
    int occurence = 0;
    while(numberEntered>=1){
        numberEntered = numberEntered/2;
        occurence++;
    }
    cout<<"Occurences = "<<occurence;
    return 0;
}