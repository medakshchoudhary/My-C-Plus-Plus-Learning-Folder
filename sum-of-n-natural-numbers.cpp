#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout<<"Program to get the sum for first n natural numbers\n";
    cout<<"Enter the a natural number : ";
    cin>>numberEntered;
    int sum = 0;
    int i = 1;
    while(i<=numberEntered){
        sum=sum+i;
        i++;
    }

    cout<<sum;
    return 0;
}