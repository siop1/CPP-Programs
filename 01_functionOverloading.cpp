// Using multiples user defined function with the same name but with different parameter is called function overloading
// It is early binding.
#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int add(int a){
    return a*a;
}

int main(){
    cout << "Sum = " << add(5,7)<<endl;
    cout << "Square = " << add(5) << endl;
    return 0;
}