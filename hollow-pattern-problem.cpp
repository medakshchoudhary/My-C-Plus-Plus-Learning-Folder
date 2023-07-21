//(28-6-23) needs updation if we enter a word we dont get that hollow pattern its disorted 

#include <iostream>
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

    for(int i = 1; i<=rows;i++){
        for (int h = 1; h <= columns ; h++){
            if(i==1 || i==rows || h==1 || h==columns){
                cout<<patternVariable;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}