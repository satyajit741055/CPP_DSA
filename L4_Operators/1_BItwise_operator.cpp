#include<iostream>
using namespace std ;

int main(){
    int a = 4;
    int b = 6;

    cout<<"a&b "<< (a&b) <<endl;
    cout<<"a|b "<< (a|b) <<endl;
    cout<<"a^b "<< (a^b) <<endl;
    cout<<"~a "<< (~a) <<endl;

    cout<<"5 << 2 = "<< (5 << 2) <<endl;
    cout<<"10>>2 = "<< (10>>2) <<endl;

    int i = 7;
    cout<<(i++)<<endl;// 7 8
    cout<<(++i)<<endl;// 9 9
    cout<<(i--)<<endl;// 9 8
    cout<<(--i)<<endl;// 7 7


}   