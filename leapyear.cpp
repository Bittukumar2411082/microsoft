#include<iostream>
using namespace std;
void leapyear(int n){
    if((n%400==0)||(n%4==0 && n%100!=0)){
        cout<<"it is leap year"<<endl;
    }
    else{
        cout<<"it is not leap year";
    }
}
int main(){
    int n;
    cout<<"enter year:";
    cin>>n;
    leapyear(n);
}