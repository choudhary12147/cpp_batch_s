#include<iostream>

using namespace std;

 /*
          Q.1 Write a C++ function that takes an integer as input and uses nested if-else statements
           to determine if the number is positive and even, positive and odd, negative and even, or negative
            and odd
          
          */
  
// void number(int num){
                 
//            if ( num > 0)
//            {
//                 if (num % 2 == 0)
//                 {
//                     cout<<"number is positive and even";
//                 }
//                 else
//                 {
//                       cout<<"number is positive and odd";
//                 }
                
//            }else
//            {
//               if ( num % 2 == 0)
//               {
//                    cout<<"number is negavtive and even ";
//               }
//               else
//               {
//                    cout<<"number is negative and odd";
//               }
              
//            }
           
           

// }

// int main(){
          
         
//         int n;

//         cin>>n;

//     number(n);
        

//     return 0;
// }


/*
    Q. 2 Write a C++ function that takes an integer as input and uses nested if-else statements to determine
    if the number is within a specific range (e.g., 1-100) 
   and if it is divisible by 7

*/


void number(int n){

             if (n >= 1 && n <= 100)
             {
                    if (n % 7 == 0)
                    {
                        cout<<"number is divisble by 7";
                    }else
                    {
                        cout<<"number is not divisble by 7";
                    }
                    
                    
             }
                      
}



int main(){
    
      int num;
       cin>>num;

        number(num);

    return 0;
}