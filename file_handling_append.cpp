// WAP to append the file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("data.txt",ios::app);
    if(file.is_open()){
        file<<"This is appended data";
        cout<<"Data is appended successfully";
        file.close();
    }
    else{
        cout<<"Error";
    }
    return 0;
}


