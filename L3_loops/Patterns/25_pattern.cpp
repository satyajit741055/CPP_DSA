/*
A 
B C 
C D E 
D E F G 
print above pattern
*/

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    //cin>>n;
    int row=1;
    
    while(row<=n){
        int col=1;
        while(col<=row){ 
            char k = ch + col;
            cout<<ch<<" ";
            col = col +1;
            
        }
        row = row +1;
        cout<<endl;
        
    }
}