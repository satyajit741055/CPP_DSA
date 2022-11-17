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
        
        while(col<=n-row+1){
            //cout<<"*";
            // for printing numbers 
            cout<<row;
            col = col +1;
        }

        

        
        row = row + 1;
        cout<<endl;

      }      
        
    
}