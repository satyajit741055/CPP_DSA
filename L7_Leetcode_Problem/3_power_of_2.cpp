#include<iostream>
using namespace std;


int main(){
    int n; 
    cin >> n ;
    int a =INT_MAX;
    int ans= 1;
        for(int i = 0 ; i<=30; i++){
            
            if (ans == n){
                return true;
            }
            if (ans <a/2){
            ans = ans * 2; }
            
            
        }
        return false;
}