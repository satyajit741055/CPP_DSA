/*
A B C 
B C D 
C D E 
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
            char k = ch+col-1;
            cout<<k<<" ";
            col = col +1;
        }
        row = row +1;
        cout<<endl;
        ch = ch +1;
    }
}