#include<iostream>
using namespace std;
void armstrong(int n){
    int original = n;
    int temp=0;
    while(n>0){
        int ld =n%10;
        temp=temp+ld*ld*ld;
        n/=10;
    }
    if(temp==original){
        cout<<"yes it is armstrong";
    }
    else{
        cout<<"no no";
    }
}
int main(){
    int n;
    cout<<"enter armstrong number:";
    cin>>n;
    armstrong(n);
}