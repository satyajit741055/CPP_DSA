// check charachter is lowercase uppercase of numeric
#include<iostream>
using namespace std;

/*ASCII code 
0-9  ASCII VALUE 48 to 57
a-z  ASCII VALUE 97 to 122
A_Z  ASCII VALUE 65 to 90
*/

int main() {
    char ch;
    
    cout<< "Enter the value of charachter"<<endl;
    cin >>ch;

    if (ch>=48 && ch <=57){
        cout<<"Charachter is numeric";
    }
    else if (ch>=97 && ch <=122){
        cout<<"Charachter is Lowercase";
    }
    else{
        cout<<"Charachter is Uppercase";
    }
    
    
    
}