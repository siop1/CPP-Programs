#include<iostream>
using namespace std;

class A{
    public:
        int x;
        void input(){
            cout<<"Enter value of x: ";
            cin>>x;
        }
        void operator +(A a2){
            A temp;
            temp.x=x+a2.x;
            return temp;
        }

};

int main(){
    A a1,a2,a3;
    a1.input();
    a2.input();
    a3=a1+a2;
    return 0;
}