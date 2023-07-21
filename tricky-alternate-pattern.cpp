#include <iostream>
using namespace std;

int main() {
    int rows;
    int columns;
    int oddNumber;
    int evenNumber;

    cout<<"Enter how many rows you want for the pattern : ";
    cin>>rows;
    cout<<"Enter how many columns you want for the pattern : ";
    cin>>columns;
    cout<<"Enter the odd number you want for the pattern : ";
    cin>>oddNumber;
    cout<<"Enter the even number you want for the pattern : ";
    cin>>evenNumber;


    for(int i = 1; i<=rows;i++){
        for(int h = 1;h<=columns;h++){
            if((i+h)%2==0){
                cout<<oddNumber;
            }
            else{
                cout<<evenNumber;
            }
        }
        cout<<endl;
    }
    return 0;
}