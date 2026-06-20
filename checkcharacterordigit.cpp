#include<iostream>
using namespace std;
void check(char ch){
    if((ch=='A'&&ch=='Z')||(ch=='a'&&ch=='z')){
        cout<<"it is alphabate"<<endl;
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"it is digit";
    }
    else{
        cout<<"other character";
    }
}
int main(){
    char ch;
    cout<<"enter any thing to check whether it is alphabate or digit:";
    cin>>ch;
    check(ch);

}