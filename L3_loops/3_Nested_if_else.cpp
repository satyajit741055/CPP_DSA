// Print value is positive negative or zero
#include<iostream>
using namespace std;

int main() {
    int a;
    
    cout<< "Enter the value of a"<<endl;
    cin >>a;
    
    /*
    if(a>0){
        cout<< "print a is positive "<<a ;
    }
    else{
        if(a<0){
            cout<< "print a is negative "<<a ;
        }
        else{
            cout<< "print a is Zero "<<a ;
        }
    }
    */
    if(a>0){
        cout<< "print a is positive "<<a ;
    }
    else if(a<0){
        
            cout<< "print a is negative "<<a ;
        }
    else{
        cout<< "print a is Zero "<<a ;
    }
    

}
