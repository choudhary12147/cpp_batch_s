#include<iostream>

using namespace std;


// class abc{

//  public:

//   int a = 2;
//   int b = 100;

//   void multi(){

//     cout<<a*b<<endl;
//   }

// };


// class abc2 : public abc{

//     public:

//        void add(){
          
//           cout<<a+b<<endl;

//        }
// };

// class abc3 : public abc2{

//     public:

//       void print(){
//             add();
//             multi();
//       }
// };




// int main(){

//      abc3 obj;

//      obj.print();

//     return 0;
// }

/*
   multiple inheritance
*/



// class A{
//    public:

//    void display(){
//       cout<<"class B"<<endl;
//    }
// };

// class B{
//     public:
     
//      void display(){
//         cout<<"class A"<<endl;
//      }

// };

// class C : public A, public B{
      
//       public:
      
//       void view(){
//         A::display();
//         B::display();
//       }

// };

// int main(){

//      C c1;

//      c1.view();

//     return 0;
// }


/*
   hybrid inheritance
*/

class A{
   
   public:

   int a;

   void get_a(){

    cout<<"enter the a"<<endl;
      cin>>a;

   }

};


class B : public A
{

   public:
 
   int b;
    
    void get_b(){

         cout<<"enter the b "<<endl;
        cin>>b;
    }
   

};


class C 
{
      
      public:

      int c;

      void get_c(){
        cin>>c;
      }

};


class D: public B , public C
{
   
   public:

   int d;

      void mult(){

            get_a();
             get_b();
             get_c();

             cout<<a*b*c<<endl;
      }

};

int main(){
      
      D obj;

      obj.mult();
    
    return 0;
}