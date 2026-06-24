#include<iostream>
using namespace std;
void prime(int n){
      bool flag=true;
    if(n<=1){
        flag=false;
    }
    for(int i=2;i<n;i++){
            if(n%i==0){
                flag=false;
                break;
            }
        }
    if(flag==true){
        cout<<"yes it is prime number";
    }
    else{
        cout<<"no no";
    }
} 

int main(){
    int n;
    cout<<"enter number to check number is prime or not:";
    cin>>n;
    prime(n);
}