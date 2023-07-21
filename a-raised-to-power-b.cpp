//(27-6-23) revise this logic 


#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout<<"Enter the first number(a) : ";
    cin>>a;
    cout<<"Enter the second number(b) : ";
    cin>>b;
    int answer = 1;

    for(int i = 1; i<=b ; i++){
        answer = answer*a;
    }

    /* int i = 1;

    while(i<=b){
        answer = answer*a;
        i++;
    }*/
    
    cout<<answer;
    return 0;
}