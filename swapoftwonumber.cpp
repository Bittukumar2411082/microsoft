#include<iostream>
using namespace std;
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cout<<"enter number:"<<endl;
    cin>>x>>y;
    cout<<"before swap!"<<endl;
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
    swap(&x,&y);
    cout<<"after swaping!"<<endl;
     cout<<"x="<<x<<" "<<"y="<<y<<endl;
    
}