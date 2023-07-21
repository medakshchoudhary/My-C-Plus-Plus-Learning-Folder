// (9/7/23) not able to make this code 
// pattern is 
/* 012345
   0    5
   0    5
   0    5
   012345
   */

#include <iostream>
using namespace std;

int main() {
    int rows;
    int numberEntered;

    cout<<"Enter how many rows you want : ";
    cin>>rows;
    cout<<"Enter number which will be the last coulmn : ";
    cin>>numberEntered;

    for(int i = 1; i<=rows; i++){
        for(int h = 1; h<=numberEntered; h++){
            if(rows==h){
                cout<<h;
            }
            else{
                cout<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}