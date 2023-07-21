// (12/7/23) not done myself try again 
// samj bhi nhi aya kuch 

#include <iostream>
using namespace std;

int main() {
    int decimalNumber;
    cout<<"Enter a decimal number : ";
    cin>>decimalNumber;
    int answer = 0;
    int power = 1;

    // not understandable parity digit for 8 wil be three zeros how are they shifting places if they are getting added up power * 10 ke bad bhi toh again intio zero hoga ? 
    while(decimalNumber>0){
        int parityDigit = decimalNumber%2;
        answer+= parityDigit*power;
        power*=10;
        decimalNumber/=2;
    }

    cout<<answer;
    return 0;
}
