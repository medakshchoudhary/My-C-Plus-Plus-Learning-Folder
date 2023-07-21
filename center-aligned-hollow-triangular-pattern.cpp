// not able to make this pattern
/*
       1
      2 2
     3   3
    4444444
*/

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter how many rows you want : ";
    cin>>rows;

    for(int i = 1; i<=rows; i++){
        for(int h = 1;h<=rows-i;h++){
            cout<<" ";
        }
        cout<<i;
        cout<<endl;
        
    }
    return 0;
}