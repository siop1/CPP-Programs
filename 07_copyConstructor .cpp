// to demo copy constructor
#include<iostream>
using namespace std;
class demo{
    private:
    int a;
    public:
    demo(){
        cin >> a;
    }

    demo(demo &p){
        a=p.a;
    }
    void display(){
        cout << a << endl;
    }


};
int main(){
    demo obj;
    demo obj1(obj);
    // obj.display();
    obj1.display();

    return 0;
}