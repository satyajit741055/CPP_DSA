/*
1
22
333
4444
print above pattern
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cin>>rows;
    int i = 1;
    while(i<=rows){
        int j = 1;
        while(j<=i){
            cout<<i<<" ";
            j = j+1;
        }
        i = i+1;
        cout<<endl;

    }

}
