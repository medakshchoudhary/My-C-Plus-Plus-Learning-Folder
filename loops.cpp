#include <iostream>
using namespace std;

int main() {
    int repetitionLimit;
    cout<<"How many times do you want to write HARE KRISHNA ? : ";
    cin>>repetitionLimit;
    int a = 1;
    while (repetitionLimit>=a) {
        cout<<"HARE KRISHNA , ";
        //(23-06-2023) how to give a new line when hare krishna is typed 10 times ? 
        repetitionLimit--;        
    }
    
    return 0;
}