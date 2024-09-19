#include<iostream>

using namespace std;


class base {
   public:
   int b = 200;

   void B(){
          cout<<"base class is calling";
   }

};

class derived : private base {
      
      public:

      int deriv = 300;

      void func(){
            B();
      }

};


int main(){
      
        derived d1;

        cout<<d1.deriv<<endl;
        // cout<<d1.b;

        d1.func();

    return 0;
}