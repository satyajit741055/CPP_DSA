//0 1 1 2 3 5 
#include<iostream>
using namespace std;

int main(){
    int n = 5 ;
    int a = 0;
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=1;i<=n;i++){
        int c = a + b;
        cout<<c<<endl;
        
        a = b;
        b = c;
        
    }
}