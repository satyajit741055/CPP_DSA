/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1 */


 #include<iostream>
 using namespace std;

 int main(){
    int n = 6;
    int row = 1;
    int max_col = 10;
    int space = 0 ;
    
    while(row<=n){
        int col = 1;
        int start = 1;
        
        while(col<=n-row+1){
            cout<<col<<" ";
            col++;
        }
        int space1=0;
        while(space1<space){
            cout<<"*"<<" ";
            space1++;
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
        space = space +2;
        
    }
 }