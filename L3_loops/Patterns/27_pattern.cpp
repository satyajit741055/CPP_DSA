/*
_ _ _ *
_ _ * *
_ * * *
* * * *
print above pattern
*/

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    //cin>>n;
    int row=1;
    
    while(row<=n){
        int space = n - row;
        int col=1;
        while(space){    
            cout<<" "<<" ";
            space = space - 1;  
        }
        while(col<=row){    
            cout<<"*"<<" ";
            col = col +1;
        }
        row = row +1;
        cout<<endl;
        
        
        
    }
}