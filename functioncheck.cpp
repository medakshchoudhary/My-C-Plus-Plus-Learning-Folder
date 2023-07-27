#include <iostream>
using namespace std;

int changeValue(int z){
    z=100;
    return z;
}
int main() {
    int a = 5;
    
    changeValue(a); // this will update the vaue of a but not in the main funtion to understand this lets assume that changvalue makes it own universe inside the main function so value of a is updated but inside changevalue only but when it comes out of the changevalue function it will not come out bascialy its an other unverse untill we update the value of a inside the main function like below

    // a = changeValue(a); // this will update the value of a not the above one 
    cout<<a;
    return 0;
}