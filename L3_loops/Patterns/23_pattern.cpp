/*
A 
B B 
C C C 
print above pattern
*/

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    //cin>>n;
    int row=1;
    char ch = 'A' ;
    while(row<=n){
        int col=1;
        while(col<=row){
            
            cout<<ch<<" ";
            col = col +1;
        }
        row = row +1;
        cout<<endl;
        ch = ch +1;
    }
}