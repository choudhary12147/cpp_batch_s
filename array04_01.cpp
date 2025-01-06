#include<bits/stdc++.h>
using namespace std;


/* find largest in array  */



// int largest(int *arr , int n){

//          int max_value = arr[0];

//          for (int i = 1; i < n; i++)
//          {
//             if (arr[i] > max_value )
//             {
//               max_value = arr[i];
//             }
            
//          }
           
//           return max_value;
// }

// int main(){

//   int arr[] = {5,4,3,9,2};

//   int n = sizeof(arr)/sizeof(arr[0]);
  
//     cout<<largest(arr , n)<<endl;
  
//   return 0;
// }





/* linear search */

// int linear_search(int *arr , int n , int key){

//         for (int i = 0; i < n; i++)
//         {
//               if (arr[i] == key)
//               {
//                   return i;
//               }
              
//         }
        
//            return -1;
// }



// int main(){

//         int arr[] = {2,4,6,8,10,14,16};

//         int n =  sizeof(arr)/sizeof(arr[0]);
          
//           int key = 12;
         
//         cout<<"index of key is"<<linear_search(arr,n,key);
//         return 0;
// }


/* reverse an array with extra space  */


// void reverse(int *arr , int *newarr ,int n ){
           
 
//          for (int i = 0; i < n  ; i++)
//          {
//              newarr[i] = arr[n-i-1];
//          }
        
// }

// int main(){

//     int arr[] = {3,6,7,4,5,8,9};
       
//        int n = sizeof(arr)/sizeof(arr[0]);

//        int newarr[n];

//        reverse(arr,newarr,n);

//        for (int i = 0; i < n; i++)
//        {
//           cout<<newarr[i]<<" ";
//        }
       
       
//     return 0;
// }

/*  without extra space using while loop and two pointer*/

/*
    binary search for this array should be sorted 
*/


/* bubble sorted */

// void bubble_sort(int *arr ,int n ){
           

//            for (int i = 0; i < n; i++)
//            {
//               for (int j = i+1; j < n ; j++)
//               {
//                    if (arr[i] > arr[j])
//                    {
//                        int temp = arr[i];
//                          arr[i] = arr[j];

//                          arr[j] = temp;

//                    }
                   
//               }
              
//            }
// }


// int binary_search(int *arr , int n, int key){

//     int st = 0;
//     int end = n-1;
    
//       while (st<=end)
//       {
//           int mid = (st+end)/2;
           
//            if ( arr[mid] == key)
//            {
            
//               return mid;

//            }else if( arr[mid] < key){
                 
//                  st =  mid+1;

//            }else
//            {
            
//               end =  mid -1;
//            }
           
        
//       }
      
//       return -1;

// }



// int main(){

//     int arr[] = {9,6,4,3,8,2};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     bubble_sort(arr , n);

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     // now  binary search

//     int key = 8;

//      cout<<binary_search(arr,n,key)<<endl;
    
//     return 0;
// }





/*  subarray  -> contiguous part of an array
          
          no. of subarray =  (n*(n-1))/2 
    
    subsequence ->  can be  non-contiguous but according the order

 */

//   void sub_arr(int *arr, int n){

//        for (int st = 0; st < n; st++)
//        {
//            for (int end = st; end < n; end++)
//            {
//                     for (int i = st; i <= end; i++)
//                     {
//                         cout<<arr[i];
//                     }
//                     cout<<",";
                    
//            }
//            cout<<endl;
//        }
       
//   }


// int main(){

//          int arr[]  = {4,5,2,3,6,8};

//          int n = sizeof(arr)/sizeof(arr[0]);

//          sub_arr(arr,n);

//     return 0;
// }





/*
   maximum sub array sum  using brute force alogo
*/


// int sub_arr_sum(int *arr , int n){

//                     int max_sum = INT_MIN;

                    
               
//                for (int i = 0; i < n; i++)
//                {
//                   for (int j = i; j < n; j++)
//                   {
                  
//                   int sum = 0;

//                       for (int k = i; k <= j; k++)
//                       {

//                             sum+=arr[k];    
//                       }
//                       cout<<sum<<",";
//                    max_sum = max(max_sum,sum);
                     
//                   }
//                   cout<<endl;
                  
//                }

//                return max_sum;

// }



// int main(){

//          int arr[]  = {4,5,2,3,6,8};

//          int n = sizeof(arr)/sizeof(arr[0]);

//          cout<<sub_arr_sum(arr,n);

//     return 0;
// }




// optimize time complexity with o(n2)


// int sub_arr_sum(int *arr , int n){

//      int max_sum = INT_MIN;

//             for (int st = 0; st < n; st++)
//             {
                   
//                    int currsum = 0;

//                for (int end = st; end < n; end++)
//                {
//                      currsum+=arr[end];

//                }
               
//                  max_sum = max(max_sum,currsum);

//             }
            
//          return max_sum;
// }


// int main(){

//          int arr[]  = {4,5,2,3,6,8};

//          int n = sizeof(arr)/sizeof(arr[0]);

//          cout<<sub_arr_sum(arr,n);

//     return 0;
// }


/* kadane algo */


// int sub_arr_sum(int *arr , int n){

//          int max_sum = INT_MIN;
        
//         int currsum = 0;

//         for (int i = 0; i < n; i++)
//         {
//                currsum+=arr[i];
//              max_sum =  max(currsum,max_sum);

//              if (currsum < 0)
//              {
//                  currsum = 0;
//              }
             
//         }
        
//         return max_sum;

// }


// int main(){

//          int arr[]  = {4,5,2,3,6,8};

//          int n = sizeof(arr)/sizeof(arr[0]);

//          cout<<sub_arr_sum(arr,n);

//     return 0;
// }


/*
   question 1 : Given an integer array nums, return true if any value appears at least 
               twice in the array, and return false if every element is distinct.
*/

bool check(int *nums ,int n){
        
        int freq[100] = {0};

        for (int i = 0; i < n; i++)
        {
             freq[nums[i]]++;  
           
        }

        for (int i = 0; i < n; i++)
        {
                  if (freq[nums[i]] >= 2)
                  {
                           return true;
                  }
                  
        }
        
            return false;    
    
}


int main(){
  
     int nums[] = {3,4,5,6,5};

   int n = sizeof(nums)/sizeof(nums[0]);
     cout<<check(nums,n);
 
    return 0;
}