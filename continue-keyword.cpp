#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i<49){
        i++; 
        if(i%3==0){
            continue;
        }       
        cout<<i<<" "<<endl;
    }
    return 0;
}