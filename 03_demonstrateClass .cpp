#include<iostream>
using namespace std;
int main(){
    class SI{
        private:
        float p,t,r,sum;
        public:
        void takeInput(){
            cout<< "Enter principle,time and rate";
            cin>>p>>t>>r;
        }

        float simpleInterest(){
        sum=(p*t*r)/100;
            return sum;

        }


        };
    SI a;
    a.takeInput();
    cout << a.simpleInterest();
    return 0;
}