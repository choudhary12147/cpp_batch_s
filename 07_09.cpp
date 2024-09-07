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

// int firstoccurrence(int arr[] , int n , int key){
          
//           for (int i = 0; i < n; i++)
//           {
//                if (arr[i] == key)
//                {
//                    return i;
//                }
               
//           }
          
//           return -1;

// }


// int main(){

//    int arr[] = {10,20,30,40,50};
  
//      int n = sizeof(arr)/sizeof(arr[0]);

//      int key = 30;

//      cout<<"value of first occurrence is : " <<firstoccurrence(arr,n,key)<<endl;

//       return 0;
// }


/*

  7. Rotate an Array to the Right by k Steps
     o Explanation: Shift all elements to the right by k positions.
     o Given Array: {1, 2, 3, 4, 5}
     o Rotation (k = 2):
     o Expected Array: {4, 5, 1, 2, 3}

*/

// void reverse(int arr[] , int st , int end){


//       while (st<end)
//       {
//            int temp =  arr[st];
//              arr[st] = arr[end];
//              arr[end] = temp;
//              st++;
//              end--;
//       }
      
// }

// void rotatedarr(int arr[] , int n , int k){

//          if (k == 0)
//          {
//             return;
//          }

//          // reverse the complete array first

//          reverse(arr,0,n-1);

//          // reverse the first left side elements

//          reverse(arr,0,k-1);

//          // reverse the second right side array

//          reverse(arr,k,n-1);
         
// }


// int main(){

//         int arr[] = {1,2,3,4,5};

//         int n = sizeof(arr)/sizeof(arr[0]);

//         int k = 2;

//         rotatedarr(arr,n,k);

//         for (int i = 0; i < n; i++)
//         {
//              cout<<arr[i]<<" ";
//         }
        

//       return 0;
// }


/*
     8. Compute the Average of Elements in an Array
        o Explanation: Calculate the average value of all elements in the array.
        o Given Array: {1, 2, 3, 4, 5}
        o Expected Result: 3.0 (Average of 1, 2, 3, 4, and 5).
*/


// int avgsum(int arr[] , int n){
            
//             int sum=0;

//             for (int i = 0; i < n; i++)
//             {
            
                 
//                sum+= arr[i];

//             }

//            int avg = sum/n;

//            return avg;
            
// }


// int main(){

//      int arr[]  ={1,2,3,4,5};

//      int  n = sizeof(arr)/sizeof(arr[0]);

//      cout<<"avg. is : "<<avgsum(arr,n)<<endl;

//       return 0;
// }


/*
     9. Find the Most Frequent Element in an Array
        o Explanation: Determine the element that appears most often in the array.
        o Given Array: {1, 3, 2, 1, 4, 1, 5, 2}
        o Expected Result: 1

*/


// int mostfreq(int arr[] , int n){
          
//           int maxcout = 0;

//           int freq = 0;

//           for (int i = 0; i < n; i++)
//           {
//             int count = 0;
//              for (int j = 0; j < n; j++)
//              {
//                    if (arr[i] == arr[j])
//                    {
//                         count++;
//                    }
                   
//              }

//              if (maxcout < count )
//              {
//                   maxcout = count;

//                   freq = arr[i];
//              }
             
             
//           }

//           return freq;
                      
// }



// int main(){
    
//       int arr[] = {1,3,2,1,4,1,5,2};

//       int n = sizeof(arr)/sizeof(arr[0]);

//      cout<<"most count element is :"<<mostfreq(arr,n)<<endl;

//       return 0;
// }


/*
  10. Find the Median of a Sorted Array
      o Explanation: Compute the middle value or average of middle values in a sorted
         array.
      o Given Array: {1, 3, 3, 6, 7, 8, 9}
      o Expected Result: 6

*/



// int median(int arr[] , int n){

//       // (n/2th + (n/2 + 1)th)/2 th if even n
      
//          if (n%2 == 0 )
//          {

//             int medianv = ((n/2) + ((n/2)+1))/2;
//             cout<<medianv<<endl;
//             return arr[medianv-1];
         
//          }else{
            
//              int medianv = (n+1)/2;

//            cout<<medianv<<endl;

//             return arr[medianv-1];
            
//          }
      
// }


// int main(){
    
//     int arr[] = {1,3,3,6,7,8,9};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout<<n<<endl;
      
//       cout<<"median of arr is : "<<median(arr,n)<<endl;

//       return 0;
// }


/*
      11. Rotate a 2D Array 90 Degrees Clockwise
          o Explanation: Rotate a matrix 90 degrees clockwise.
          o Given 2D Array:
            1 2 3
            4 5 6
            7 8 9
          o Expected 2D Array:

            7 4 1
            8 5 2
            9 6 3


*/


void transpose(int arr[][3] , int row , int col){
            
            for (int i = 0; i < row; i++)
            {
                  for (int j = 0; j < col; j++)
                  {
                          int temp = arr[i][j];

                           arr[i][j] = arr[j][i];

                           arr[j][i] = temp;  
                  }
                  
            }
            
}


void rotated90degree(int arr[][3] , int row , int col){
        
        // transpose

        transpose(arr , row , col);


}

int main(){

     int arr[][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};


       rotated90degree(arr , 3 , 3);  

       for (int i = 0; i < 3; i++)
       {
            for (int j = 0; j < 3; j++)
            {
                  cout<<arr[i][j]<<" ";
            }

            cout<<endl;
            
       }
                    
      return 0;
}