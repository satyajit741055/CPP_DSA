/*
123
456
789

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
        while(j<=rows){
            cout<<sum;
            sum=sum+1;
            j = j+1;

        }
        i = i+1;
        cout<<endl;

    }

}
