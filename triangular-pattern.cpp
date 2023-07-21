// #include <iostream>
// using namespace std;

// int main() {
//     string patternVariable;
//     int occurence;

//     cout<<"Enter the patter variable you want : ";
//     cin>>patternVariable;
//     cout<<"How long do you want the pattern : ";
//     cin>>occurence;

    
//     for(int i = 1; i<=occurence ; i++){
//         for(int h = 1; h<=i; h++){
//             cout<<patternVariable;
//         }
//         cout<<endl;
//     }


//     return 0;
// }




// its reversed code 

// #include <iostream>
// using namespace std;

// int main() {
//     string patternVariable;
//     int occurence;

//     cout<<"Enter the patter variable you want : ";
//     cin>>patternVariable;
//     cout<<"How long do you want the pattern : ";
//     cin>>occurence;

    
//     for(int i = 1; i<=occurence ; i++){
//         for(int h = 1; h<=(occurence-i+1); h++){ // logic of subtracting one each time 
//             cout<<patternVariable;
//         }
//         cout<<endl;
//     }


//     return 0;
// }



// non aligned triangular pattern 

#include <iostream>
using namespace std;

int main() {
    string patternVariable;
    int occurence;

    cout<<"Enter the patter variable you want : ";
    cin>>patternVariable;
    cout<<"How long do you want the pattern : ";
    cin>>occurence;

    
    for(int i = 1; i<=occurence ; i++){
        for(int h = 1; h<=(occurence-i); h++){  
            cout<<" ";
        }
        for(int h = 1; h<=(2*i-1);h++){
            cout<<patternVariable;
        }
        cout<<endl;
    }


    return 0;
}
