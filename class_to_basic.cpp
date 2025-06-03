/WAP to demonstrate basic to class type conversion
#include<iostream>
using namespace std;
class convert{
    public:
        int hr=2;
        int min=20;
        operator int(){
            return hr*60+min;
        }
      
};
int main(){
    convert c;
    int t;
    t=c;
    cout<<"Value of t= "<<t;
    return 0;
}



