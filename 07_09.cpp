#include<iostream>

using namespace std;

/*
   1. Find the Maximum Value in an Array
      o Explanation: Identify the largest value in the array.
      o Given Array: {3, 1, 4, 1, 5, 9, 2}
      o Expected Result: 9
*/


// int maxval(int arr[],int n){
          
//          int max = INT16_MIN;

//           for (int i = 0; i < n; i++)
//           {
//                if (arr[i] > max )
//                {
//                   max = arr[i];
//                }
               
//           }

//           return max;
          
// }


// int main(){
      
//        int arr[] = {3,1,4,1,5,9,2};

//        int n = sizeof(arr)/sizeof(arr[0]);

//       cout<<"max value of arr is :"<<maxval(arr,n)<<endl;
  

//     return 0;
// }


/*
     2. Reverse an Array
      o Explanation: Reverse the order of elements in the array.
      o Given Array: {1, 2, 3, 4, 5}
      o Expected Array: {5, 4, 3, 2, 1}
*/





//  int reverse(int arr[] , int n){
             
            
//             int narr[n];


//             int j = 0;

//             for (int i = n-1; i >= 0; i--)
//             {
//                   narr[j] = arr[i];
//                   j++;
//             }

//             for (int i = 0; i < n; i++)
//             {
//                 cout<<narr[i]<<" ";
//             }
                      

//  }

//  int main(){
    
//        int arr[] = {1,2,3,4,5};

//        int n = sizeof(arr)/sizeof(arr[0]);

//        reverse(arr, n);

//     return 0;
//  }

/*
   without using extra space
*/

// void reverse(int arr[] , int n){
      
//         int start = 0;
//         int end  = n -1;

//         while (start < end)
//         {
//                int temp =  arr[start];

//                arr[start] = arr[end];

//                arr[end] = temp;

//                start++;
//                end--;
              
//         }
        
// }

// int main(){

     
//      int arr[] = {1,2,3,4,5};
     
//      int n = sizeof(arr)/sizeof(arr[0]);

//      reverse(arr , n);

//      for (int i = 0; i < n; i++)
//      {
//           cout<<arr[i]<<" ";
//      }
     

//     return 0;
// }




/*
Q.3 Remove Duplicates from a Sorted Array
      o Explanation: Remove duplicates and return the unique elements.
      o Given Array: {1, 1, 2, 3, 3, 4}
      o Expected Array: {1, 2, 3, 4}

*/


// int removeduplicate(int arr[] , int n){
         

//     if ( n == 0)
//     {
//          return 0;
//     }
    

//          int j = 0;

//          for (int i = 1; i <= n; i++)
//          {
//                  if (arr[j] != arr[i])
//                  {
//                         j++;
//                     arr[j] = arr[i];
//                  }
                 
//          }
         
//          return j+1;
// }


// int main(){
  
//     int arr[] = {1,1,2,3,3,4};

//     int n =  sizeof(arr)/sizeof(arr[0]);
   
//          int n1 = removeduplicate(arr,n);

//          for (int i = 0; i < n1; i++)
//          {
//               cout<<arr[i]<<" ";
//          }
            
//     return 0;
// }


/*
  4. Find the Sum of All Even Numbers in an Array
      o Explanation: Sum all even numbers present in the array.
      o Given Array: {1, 2, 3, 4, 5, 6}
      o Expected Result: 12 (Sum of 2, 4, and 6)

*/


// int sumofeven(int arr[] , int n){

//           int sum = 0;

//           for (int i = 0; i < n; i++)
//           {
//               if (arr[i] % 2 == 0)
//               {
//                   sum+= arr[i];
//               }
              
//           }

//           return sum;
           
// }


// int main(){

//       int arr[] = {1,2,3,4,5,6};

//       int n  =  sizeof(arr)/sizeof(arr[0]);

//       cout<<"sum is : "<<sumofeven(arr,n)<<endl;

//     return 0;
// }



/*
      5. Merge Two Sorted Arrays
        o Explanation: Combine two sorted arrays into one sorted array.
        o Given Arrays: {1, 3, 5} and {2, 4, 6}
        o Expected Array: {1, 2, 3, 4, 5, 6}

*/



// void mergesortedarray(int arr1[],int n1,int arr2[], int n2,int result[]){
               
//        int k = 0, i =0 ,j = 0;
     
//      while (i < n1 && j <n2)
//      {
//             if (arr1[i] <arr2[j] )
//             {
//                   result[k] = arr1[i];
//                   i++;
//             }else 
//             {
//                  result[k] = arr2[j];
                  
//                   j++;
//             }
            
//             k++;
            
//      }

//      while (i<n1)
//      {
//           result[k] = arr1[i];
//           i++;
//           k++;
//      }
//      while (j<n2)
//      {
//           result[k] = arr2[j];
//           j++;
//           k++;
//      }
     

// }


// int main(){
          
//           int arr1[] = {1,3,5};
//           int arr2[] = {2,4,6};
              
//            int n1 = sizeof(arr1)/sizeof(arr1[0]);

//            int n2 = sizeof(arr2)/sizeof(arr2[0]);
        
//             int result[n1+n2];
//            mergesortedarray(arr1,n1,arr2,n2,result);

//            // print array

//            for (int i = 0; i < n1 + n2; i++)
//            {
//                 cout<<result[i]<<" ";
//            }
               

//     return 0;
// }



/*
  6. Find the Index of the First Occurrence of a Value
     o Explanation: Return the index of the first appearance of a specified value.
     o Given Array: {10, 20, 30, 40, 50}
     o Search Value: 30
     o Expected Result: 2


*/