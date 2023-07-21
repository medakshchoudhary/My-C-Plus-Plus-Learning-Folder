// yeh paley nhi parda isko check karna bad mai 
// paleyb isliye nhi parda kyunki break ka concept lageyga idr uske bina yeh usi order mai chaleyga 1 - 3 phir 1 - 3

#include <iostream>
using namespace std;

int main(){
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

}