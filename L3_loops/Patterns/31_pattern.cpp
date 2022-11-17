/*
1 2 3 4
  2 3 4 
    3 4 
      4
print above pattern
*/

#include<iostream>
using namespace std;
int main(){
      int n = 4;
      //cin >> n;

      int row = 1;
      while(row<=n){
        int col = 1;
        //int space = row - col;
        int space = row - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        int c = row;
        while(col<=n-row+1){
            //cout<<"*";
            // for printing numbers 
            cout<<c;
            col = col +1;
            c = c + 1;
        }

        row = row + 1;
        cout<<endl;

      }      
        
    
}