#include<iostream>
using namespace std;

int main(){
    int n = 14;
    int flag = 1;
    for(int i=2;i<n;i++){
        
        if(n%i==0){
            
            //cout<<"Not Prime"<<i<<endl;
            flag = 0;
            break;
        }
        else{
            //cout<<"Prime"<<endl;
            flag = 1;
        }

               
    }
    if (flag==0){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
    
}