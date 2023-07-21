#include <iostream>
#include <string>
using namespace std;

int main() {
    int rows;
    int columns;
    
    string patternVariable;
    cout<<"Enter the character you want for the pattern : ";
    getline(cin, patternVariable); // using getline feature helps us takes input as more than two words
    cout<<"Enter how many rows for the pattern you want : ";
    cin>>rows;
    cout<<"Enter how many columns for the pattern you want : ";
    cin>>columns;

    for(int i = 1;i<=rows;i++){
        for(int h = 1; h<=columns; h++){
            cout<<patternVariable;
        }
        cout<<endl;
    }


    return 0;
}