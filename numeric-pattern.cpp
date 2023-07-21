// #include <iostream>
// using namespace std;

// int main() {
//     int numberEntered;
//     cout<<"Enter the number upto which you want the pattern : ";
//     cin>>numberEntered;

//     for(int i = 1; i<=numberEntered; i++){
//         for(int h = i; h<=numberEntered; h++){
//             cout<<h;
//         }
//         for(int h = 1; h<=(i-1); h++ ){
//             cout<<h;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// plain numeric pattern 

#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    int rows;

    cout<<"Enter number upto which you want the pattern : ";
    cin>>numberEntered;
    cout<<"Enter how many rows you want : ";
    cin>>rows;

    for(int i = 1; i<=rows; i++ ){
        for(int h = 0; h<=numberEntered; h++){
            cout<<h;
        }
        cout<<endl;
        
    }
    return 0;
}
