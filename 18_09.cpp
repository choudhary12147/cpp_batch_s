#include<iostream>

using namespace std;


/*
      agregations proprties of one class is called by another class by using inheritance
*/


/*
     function overriding

*/

// class a{
    
//     public:

//     void print(){
//               cout<<"fun of a is called";
//     }
// };

// class b : public a{

//     public:
//     void  print(){
//         cout<<"fun of b is called";
//     }

// };


// int main(){

//     b obj;

//     obj.print();

//     return 0;
// }




 void max(int a , int b);
 void max( int , int , int );




int main(){

    

    max(1,2);
    max(2,3,4);


    return 0;
}

   void max(int a , int b){
        if (a>b)
        {
            cout<<a<<"greater than"<<endl;
        }else
        {
            cout<<b<<"greater than";
        }
        
        
    }

   void max(int a , int b ,int c){
       
       if (a>b&&a>c)
       {
           cout<<a<<" is greater";
       }
       else if ( b>c)
       {
          cout<<b<<" is greater";
       }
       else
       {
           cout<<c<<" is greater";
       }      
       
   }