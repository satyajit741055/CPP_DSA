/*
A B C 
D E F
G H I 
print above pattern
*/

#include<iostream>
using namespace std;
int main(){
    int n = 3;
    //cin>>n;
    int row=1;
    char ch = 'A' ;
    while(row<=n){
        int col=1;
       
        while(col<=n){
            
            cout<<ch<<" ";
            col = col +1;
            ch = ch +1;
        }
        row = row +1;
        cout<<endl;
    }
}