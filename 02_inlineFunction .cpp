// Inline function is a function in which body of function definition  is copied to the place where that function is called inline function
#include<iostream>
using namespace std;

inline int add(int a,int b){
    return a+b;
}
int main(){
    cout << "Sum = " << add(5,7);
    return 0;
}