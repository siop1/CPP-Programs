// friend keyword is used to access variables inside private
#include<iostream>
using namespace std;

class A{
    private:
    int a=10;
    public:
    friend void display(A t){
        cout<<t.a<<endl;
    }
};

int main(){
    A m;
    display(m);
    return 0;
}