/*
* * * *
* * *
* *
*
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
        
        while(col<=n-row){    
            cout<<"*"<<" ";
            col = col +1;
            
        }
        row = row +1;
        
        cout<<endl;
        
        
        
    }
}