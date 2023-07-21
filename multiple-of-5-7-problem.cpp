// print the first multiple of 5 which is also the multiple of 7
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;
//     int variable;
//     int five;
//     while(true){
//         i++;
//         five = 5*i;
//         if(five%7==0){
//             variable = five;
//             break;
//         }
//     }
//     cout<<variable;
//     return 0;
// }


// // the solution to this in a boolean operator
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;
//     bool found = false;
//     int multiple;
//     while(true){
//         i++;
//         int five = 5*i;
//         if(five%7==0){
//             multiple = five;
//             found = true;
//             break;
//         }
//     }
//     if (found==true){ // dosent affects if you write == true for a bool in if because if automatically/by default takes the value true if not passes to the next operator
//         cout<<"The first multiple of 5 which is also a multiple of 7 is : "<<multiple<<endl;
//     }
//     else{
//         cout<<"These is no multiple of 5 that is also a multiple of 7";

//     }
//     return 0;
// }


// solution to this in for loop

#include <iostream>
using namespace std;

int main() {
    for (int i = 5 ; ; i = i+5) {
        if(i%7==0){
            cout<<i;           
            break;
        }
    }
    return 0;
}