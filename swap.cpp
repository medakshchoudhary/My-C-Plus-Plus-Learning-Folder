#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    int c;
    c = a;
    a = b;
    cout <<"Swapped second in first:"<<a<<endl;
    cout <<"Swapped first in second:"<<c<<endl;
    return 0;
}