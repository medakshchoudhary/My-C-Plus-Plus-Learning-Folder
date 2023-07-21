// (11/07/23) done with help try to do it again

#include <iostream>
using namespace std;

int main() {
    int binaryNumber;
    cout<<"Enter any binary number : ";
    cin>>binaryNumber;
    int answer = 0;
    int power =1;

    while(binaryNumber>0){
        int digit = binaryNumber%10;
        answer+=digit*power;
        power*=2;
        binaryNumber/=10;
    }
    
    cout<<answer;
    return 0;
}