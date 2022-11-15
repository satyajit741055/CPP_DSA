// Is number prime or not by while loop

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Enter value of a";
    cin>>a;
    
    int i = 2;
    while (i<a){
        if(a%i==0){
            cout<<"number is not prime";
            
        }
        else{
          cout<<"number is prime";  
        }
        i = i+1;
    
    }
    


}