#include<iostream>
using namespace std;
class postincrement{
    public:
    int value;
    postincrement(int value=0){
        this->value=value;
    }
    postincrement operator ++(int){
        value++;
        return value;
    }
    void display(){
        cout<<"unary post increment="<<value<<endl;
    }
};
int main(){
 postincrement p(5);
 p++;
 p.display();

}