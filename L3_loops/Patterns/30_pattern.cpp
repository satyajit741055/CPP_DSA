/*
      1
    2 2
  3 3 3
4 4 4 4
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
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        
        while(col<=row){
            //cout<<"*";
            // for printing numbers 
            cout<<row;
            col = col +1;
        }

        

        
        row = row + 1;
        cout<<endl;

      }      
        
    
}