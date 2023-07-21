// (22/6/2023) i tried making this with just beginer knowdledge i didnt knew about the try and catch feature when i will reach there i will update this 

#include <iostream>
#include <string>
using namespace std;

int main() {
    // cout<<(!100); complement operator
    // cout<<(!0); complement operator
    string stringEntered;
    cout<<"Enter anything : ";
    cin>> stringEntered;
    const int formula = stoi(stringEntered);
    if(formula%2 == 1) {
        cout<<"This is a number";
    }    
    else if(formula%2 == 0) { 
        cout<<"This is a number";
    }    
    else{
        cout<<"This is not a number";
    }    
    return 0;
}
