// patern to solve is 1-2+3-4+n................................

#include <iostream>
using namespace std;

int main() {
    int uptoWhat;
    cout<<"Enterthe number upto which you want this code to get executed : ";
    cin>>uptoWhat;
    int i = 1;
    int pattern = 0;

    while(i<=uptoWhat){
        if(i%2==1){
            pattern = pattern + i;        
        }
        else{
            pattern = pattern - i;
        }
        i++;
    }
    cout<<pattern;
    return 0;
}
