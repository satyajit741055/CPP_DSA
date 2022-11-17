/* 
      1   
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n = 4 ;
    //cin>>n;

    int row = 1;
    while(row<=n){
        int space = n- row;
        while(space){
            cout<<' ';
            space = space -1;
        }

        int col = 1;
        int count = 1;
        while(col<=row){
            cout<<count;
            col = col +1;
            count++;
        }

        int start = row-1;
        while(start){
            cout<<start;
            start--;
        }

        row = row +1;
        cout<<endl;

    }



}