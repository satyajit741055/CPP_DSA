/*
      1
    2 3 
  4 5 6 
7 8 9 10
print above pattern
*/

#include<iostream>
using namespace std;
int main(){
      int n = 4;
      //cin >> n;

      int row = 1;
      int c = 1;
      while(row<=n){
        int col = 1;
        //int space = row - col;
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        
        while(col<=row){
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