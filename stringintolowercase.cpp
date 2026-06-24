#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

}