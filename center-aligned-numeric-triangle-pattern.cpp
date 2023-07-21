#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter the number of rows you want :";
    cin>>rows;

    for(int i = 1; i<=rows; i++){
        for(int h = 1; h<=(rows-i);h++){
            cout<<" ";
        }
        for(int h = 1;h<=i;h++){
            cout<<h;
        }
        for(int h = (i-1);h>=1;h--){
            cout<<h;
        }
        cout<<endl;

    }
    return 0;
}