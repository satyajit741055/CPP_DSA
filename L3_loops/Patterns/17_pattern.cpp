/*
1
2 3
3 4 5
4 5 6 7
print above pattern
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    
    while(row<=n){
        int col = 0;
        while(col<row){
            cout<<col+row<<" ";
            col = col+1;
          
        }
        row = row+1;
        cout<<endl;

    }

}
