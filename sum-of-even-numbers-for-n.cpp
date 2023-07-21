// Write a program to calculate the sum of all even numbers from 1 to a given positive integer 'n'. Implement the program in C++.

#include <iostream>
using namespace std;

int main() {
    int numberEntered;
    cout<<"Enter a positive number : ";
    cin>>numberEntered;


    while(numberEntered<=0){
        cout<<"Invalid number entered Please Enter Again : ";
        cin>>numberEntered;
    }

    int sum = 0;
    int i = 1;
    
    while(i<=numberEntered){
        if (i%2==0){
            sum = sum + i;
            i++;
        }
        else {
            i++;
        }
    }
    cout<<sum;

    return 0;
}

// a better approach by chatgpt using direct formula

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a positive number: ";
//     cin >> n;

//     while (n <= 0) {
//         cout << "Invalid input. Please enter a positive number: ";
//         cin >> n;
//     }

//     int sum = (n / 2) * ((n / 2) + 1); // direct formula 

//     cout << "Sum of even numbers from 1 to " << n << ": " << sum << endl;

//     return 0;
// }
