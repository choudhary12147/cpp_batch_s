#include<iostream>

using namespace std;


// Q.1       a = 1 , b = 2 and c = 3
//           1 , 2 , 3 , 4 , 6 , 9  

int main(){
     

       int a  = 1 , b = 2 ,c = 3 ;
           
           cout<<a<<" "<<b<<" "<<c<<" ";

       for (int i = 0; i < 5; i++)
       {
            int d = c + a ;

            cout<<d<<" ";

            a = b;
            b = c;
            c = d;
        
       }
       





    return 0;
}