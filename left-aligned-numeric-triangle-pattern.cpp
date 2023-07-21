#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"How many rows(columns will be the same for the number of the rows) do you want for the pattern : ";
    cin>>rows;

    for(int i = 1; i<=rows; i++){
        for(int h = 1; h<=i;h++){
            cout<<h;
        }
        cout<<endl;
    }
    return 0;
}
