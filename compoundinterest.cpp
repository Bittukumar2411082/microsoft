#include<iostream>
#include<cmath>
using namespace std;
double compoundinterest(int p,int r,int t,int n){
    double amount = p * pow((1 + r / (100.0 * n)), n * t);
    double interest=amount-p;
    return interest;    
}
int main(){
    int p,r,t,n;
    cout<<"enter principle:";
    cin>>p;
    cout<<"enter rate:";
    cin>>r;
    cout<<"time:";
    cin>>t;
    cout<<"number of time interest is compunded:";
    cin>>n;
    cout<<"compound interest="<<compoundinterest(p,r,t,n);
}