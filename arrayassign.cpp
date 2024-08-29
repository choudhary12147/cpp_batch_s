#include<iostream>

using namespace std;




/*   Q.1  Create an array of integers with a size specified by
           the user ? */





// int main(){


//         int a , b;
//         cout<<"enter the index of matrixs "<<endl;

//         cin>>a>>b;

//         int matrix1 [a] [b];

//         int matrix2[a][b];
        
//          for (int i = 0; i < a; i++)
//          {
//                 for (int j = 0; j < b; j++)
//                 {
//                       cin>>matrix1[a][b];
//                 }
                
//          }
         
//          for (int i = 0; i < a; i++)
//          {
//              for (int i = 0; i < b; i++)
//              {
//                  cin>>matrix2[a][b];
//              }
             
//          }

// return 0;

// }     

/*
        Q.2 Create a 2x2 matrix and a 2x2 matrix with user-
            defined values ?
*/


/*  Q. find a duplicate value ? */


/*
  Q. bubble sorting 
*/

/*
 Q.  find a missing from n sequence of array ?
*/

// int missnum(int arr[] , int n){
     
//      int arrsum = 0;

//      for (int i = 0; i < n; i++)
//      {
//             arrsum+= arr[i];
//      }
     
//      int totalsum = 0;
  
//   for (int i = 1; i <= n+1; i++)
//   {
//       totalsum+=i;
//   }
  
//      return totalsum - arrsum ;


// }



// int main(){
    
//     int arr[] = {1,2,4,5};

//     int n = sizeof(arr)/sizeof(arr[0]);

//      cout<<"mis number is :"<<missnum(arr , n);


//     return 0;
// }


/*
   Q. find the element their sum, is equal to the 7 
*/


int main(){
      
      int arr[] = {1,2,3,4,5};

      int size = sizeof(arr)/sizeof(arr[0]);
     
      int num = 7;

      int count = 0;


      for (int i = 0; i < size; i++)
      {
        for (int j = i+1 ; j < size; j++)
        {
              int sum =  arr[i] + arr[j];

              if (sum ==  num)
              {
                count++;
              }
               
        }
        
      }
      
   cout<<count<<endl;


}