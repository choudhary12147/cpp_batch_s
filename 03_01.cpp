#include<bits/stdc++.h>

using namespace std;


// fibonachi series

// int fiboNum(int n){

//           if(n==0|| n==1){
//               return n;
//           }

//       return fiboNum(n-1) + fiboNum(n-2);

// }

// int  main(){
    
//      int n = 5;
//      cout<<fiboNum(n)<<endl;

//     return 0;
// }


/*
Write a program to check if each element in an array is a perfect number or not.
*/

bool isPerfect(int num){

    if (num <= 1)
    {
        return false;
    }
    


    int sum = 0;

    for (int i = 1; i <= num/2; i++)
    {
         if(num%i == 0){
            sum+=i;
         }
    }


    return sum == num;

}


int main(){
      
      int arr[] = {4,16,36,9};

      int n = sizeof(arr)/sizeof(arr[0]);


      for (int i = 0; i < n; i++)
      {
       
         if (isPerfect(arr[i]))
         {
              cout<<arr[i]<<"is perfect square"<<endl;
         }else
         {
            cout<<arr[i]<<"is not perfect square"<<endl;
         }
         

      }
       

}