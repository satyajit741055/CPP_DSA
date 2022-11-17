/*
A A A
B B B
C C C 
print above pattern
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    //cin>>n;
    int row = 1;
    char letter = 'A';
    while (row<=n){
        int col = 1;
        char ch = 'A'+row-1;
        while(col<=n){
            //cout << letter<< " ";
            cout<<ch<< " ";
            col = col +1;
        }
        row = row+1;
        cout << endl;
        letter = letter +1 ;
    }
    

}
