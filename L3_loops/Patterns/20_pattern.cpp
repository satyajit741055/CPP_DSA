/*
A B C 
A B C 
A B C 
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
        //char ch = 'A' ;
        while(col<=n){
            char ch = 'A'+col-1 ;
            cout<<ch<<" ";
            col = col +1;
            //ch = ch +1;
        }
        row = row +1;
        cout<<endl;
    }
}