//1281. Subtract the Product and Sum of Digits of an Integer
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/ 

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter Value"<<endl;
    cin>>n;
    int sum = 0;
    int prod= 1;
    int a;

    while(n!=0){
        a = n%10;
        n = n/10;
        sum = sum + a;
        prod = prod * a;
    }
    int substraction;
    if (sum>prod){
         substraction = sum - prod;
    }
    else{
         substraction = prod - sum;
    }
    cout<<substraction<<endl;

}