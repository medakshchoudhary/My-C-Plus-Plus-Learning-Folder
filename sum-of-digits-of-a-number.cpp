// (24-6-2023)  not adding the digits of the numbers whose length is more than 9 digits
// (24-6-2023 (a few seconds later FLASHBACK BOOM)) solution to the above problem use long long instead of int except int main function or it will give error to compute larger values 
#include <iostream>
using namespace std;

int main() {
    long long numberEntered;
    cout<<"Enter the number whoes sum of digits you want : ";
    cin>>numberEntered;
    long long sum = 0;
    long long i = 1;
    while(i<=numberEntered){
        long long remainder = numberEntered%10;
        sum = sum + remainder;
        numberEntered = numberEntered/10; 
        /* why i didnt made it float like earlier because it is in long long datatype which automatically converts 12.3 long longo 12 when i enter 123 as a number for first step of sum addition like this 
        float change = numberEntered;
        numberEntered = change/10;*/
    }
    cout<<sum;
    return 0;
}