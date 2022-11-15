// Print sum of 1 to n number 
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n";
    cin >>n;
    int i = 0;
    int sum = 0;
    while (i<n){
        
        i = i + 1;
        sum = sum+i;
        
    }
    cout<<"Sum of 1 to "<<n <<" is "<< sum;

}


