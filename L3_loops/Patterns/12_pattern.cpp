/*
111
222
333

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
            cout<<rows-j+1;
            j = j+1;
        }
        i = i+1;
        cout<<endl;

    }

}
