#include <iostream>
using namespace std;

int changeValue(int z){
    z=100;
    return z;
}
int main() {
    int a = 5;
    changeValue(a);
    cout<<a;
    return 0;
}