#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout<<"Enter a number : ";
    cin>>numberEntered;
    int digits = 0;
    while(numberEntered>0){
            digits = digits + 1; 
            numberEntered = numberEntered/10;
        
    }
    cout<<digits;
    return 0;
}