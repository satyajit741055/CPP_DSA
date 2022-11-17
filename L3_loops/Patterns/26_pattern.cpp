/*
D 
C D 
B C D
A B C D 
print above pattern
*/

#include<iostream>
using namespace std;
int main(){
    int n = 4;
    //cin>>n;
    int row=1;
    
    while(row<=n){
        int col=1;
        char ch = 'A'+n-row;
        while(col<=row){ 
            
            cout<<ch<<" ";
            col = col + 1; 
            ch = ch + 1 ;
        }
        row = row +1;
        cout<<endl;
        
        
        
    }
}