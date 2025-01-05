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

// bool isPerfect(int num){

//     if (num <= 1)
//     {
//         return false;
//     }
    


//     for (int i = 2; i*i <= num; i++)
//     {
//          if(i*i == num){
//             return true;
//          }
//     }

//   return false;

// }


// int main(){
      
//       int arr[] = {4,16,36,9,56, 6};

//       int n = sizeof(arr)/sizeof(arr[0]);


//       for (int i = 0; i < n; i++)
//       {
       
//          if (isPerfect(arr[i]))
//          {
//               cout<<arr[i]<<"is perfect square"<<endl;
//          }else
//          {
//             cout<<arr[i]<<"is not perfect square"<<endl;
//          }
         

//       }
       

// }




/*
Write a program to check if each element in an array is a strong number or not.
*/


// int fact(int num){
          
//           int result = 1;

//           for (int i = 1; i <= num; i++)
//           {
//               result*=i;
//           }

//           return result;
          
// }



// bool isStrong(int num){

//     int original_num = num;

//        int sum = 0;

//        while (num >= 1)
//        {
//           int di = num%10;

//           sum+= fact(di);

//           num/=10;
//        }
       
//     if (sum == original_num)
//     {
//         return true;
//     }else
//     {
//         return false;  
//     }     
// }


// int main(){

//     int arr [] = {145 , 123 , 456};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < n; i++)
//     {
//           if (isStrong(arr[i]))
//           {
//               cout<<arr[i]<<"is stronge num"<<endl;
//           }else
//           {
//             cout<<arr[i]<<"is not stronge num"<<endl;
//           }
          
          
//     }
     
//      return 0;
    
// }


/*
   Write a program to find the sum of digits of each element in an array.
*/

// int sum_arr_ele ( int arr[] , int n){
         
//          int sum = 0;

//          for (int i = 0; i <n ; i++)
//          {
//                sum+=arr[i];
//          }

//         return sum; 
// }


// int main(){
    
//     int arr[] = {1,2,4,5,6};

//     int n = sizeof(arr)/sizeof(arr[0]);

//    cout<<sum_arr_ele(arr,n)<<endl;
    
//     return 0;
// }

/*
  Write a program to reverse the digits of each element in an array and store the result.
*/


void reverse(int arr[] , int n){
             
               int st = 0;
               int end = n;

             while (st<=end)
             {
                  int temp = arr[st];
                  arr[st] =  arr[end];
                  arr[end] = temp;
                  st++;
                  end--;
             }
             


}


int main(){
     
       int arr[] = {2,4,6,7,3};

       int n = sizeof(arr)/sizeof(arr[0]);

       reverse(arr,n);

       for (int i = 0; i < n; i++)
       {
             cout<<arr[i]<<" ";
       }
       


    return 0;
}