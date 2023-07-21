// college wallahs answer to this is also not corret uske both are not working agey and peeche wale zeroes
// but mine only first zeroes are not being adressed because 
// int and long long daat types ignore zeroes which are before the number as it dosent counts

#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout<<"Enter a number to be reveresed : ";
    cin>>numberEntered;

    // while(numberEntered>0){
    //     int digits = numberEntered%10;
    //     cout<<digits;
    //     numberEntered = numberEntered/10;
    // }
    
    // second approach 
    
    int answer = 0;
    while(numberEntered>0){
        int digits = numberEntered%10;
        answer = answer*10 + digits;
        numberEntered = numberEntered/10;
    }
    cout<<answer;

    return 0;
}
