// Print sum of 1 to n number  odd number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n";
    cin >>n;
    int i = 1;
    int sum = 0;
    while (i<=n){
        
        
        sum = sum+i;
        i = i + 2;
        
    }
    cout<<"Sum of 1 to "<<n <<" is "<< sum;

}


