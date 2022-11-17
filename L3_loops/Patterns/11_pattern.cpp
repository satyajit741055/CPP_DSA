/*
123
123
123

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
        while(j<=rows){
            cout<<j;
            j = j+1;
        }
        i = i+1;
        cout<<endl;

    }

}
