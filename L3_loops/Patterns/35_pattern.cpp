/* 
1234554321
1234**4321
123****321
12******12
1********1
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5 ;
    //cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        int count = 1;
        while(col<=n-row+1){
            cout<<count<<" ";
            count++;
            col++;
        }

        int space = row - 1;
        while(space){
            cout<<"*"<<" ";
            space--;
        }


        int space1 = row - 1;
        while(space1){
            cout<<"*"<<" ";
            space1--;
        }

        int col1=6;
        int count1 = n-row+1;//4
        while(col1-row){
            cout<<count1<<" ";
            count1--;
            col1--;
        }
   
        row++;
        cout<<endl;


    }



}