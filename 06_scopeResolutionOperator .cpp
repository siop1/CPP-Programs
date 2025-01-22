#include<iostream>
using namespace std;
  class SI{
        private:
        float p,t,r,sum;
        public:
        void takeInput();
        float simpleInterest();

        };
     void SI :: takeInput(){
        cout<< "Enter principle,time and rate: "<< endl;
        cin>>p>>t>>r;
    }

    float SI :: simpleInterest(){
        sum=(p*t*r)/100;
        return sum;

    }

int main(){
    SI a;
    a.takeInput();
    cout << a.simpleInterest();
    return 0;
}