/*
1
2 3
4 5 6
7 8 9 10
print above pattern
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cin>>rows;
    int i = 1;
    int sum = 1;
    while(i<=rows){
        int j = 1;
        while(j<=i){
            cout<<sum<<" ";
            j = j+1;
            sum = sum + 1;
        }
        i = i+1;
        cout<<endl;

    }

}
