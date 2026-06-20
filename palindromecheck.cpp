#include<iostream>
using namespace std;
void palindrome(int n){
    int temp=n;
    int reverse=0;
    while(n>0){
        int ld=n%10;
        reverse = reverse * 10 + ld;
        n/=10;
    }
    if(reverse==temp){
        cout<<"yes it is palindrome";
    }
    else{
        cout<<"no it is not palindrome";
    }
}
int main(){
    int n;
    cout<<"enter number to check number is palindrome:";
    cin>>n;
    palindrome(n);
}