#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// 2. selection sort -> pick the smallest (from unsorted) and put it in the begining.


// void selectionSort(int *arr , int n){
      
//      for (int i = 0; i < n-1; i++)
//      {
//          int min_idx = i;

//          for (int j =i+1; j < n; j++)
//          {
//                  if (arr[min_idx] > arr[j] )
//                  {
//                          min_idx = j;
//                  }
                   
//          }
         
//            swap(arr[min_idx],arr[i]);

//      }
     
// }


// int main(){

//   int arr[] = {5,4,1,3,2};
  
//    selectionSort(arr,5);

//  for (int i = 0; i < 5; i++)
//  {
//       cout<<arr[i]<<",";
//  }
 

//     return 0;
// }


// 3. insertion sort -> pick an element from unsorted part & place it correctly in sorted part.


// void insertionSort(int *arr , int n){

//          for (int i = 1; i < n; i++)
//          {
              
//              int curr = arr[i];                           

//              int prev = i-1;             

//              while (prev >= 0 && arr[prev] > curr)
//              {
//                 swap(arr[prev],arr[prev+1]);
        
//                  prev--;
//              }
              
//               arr[prev+1]  = curr; 
//          }   
         

// }


// int main(){

//   int arr[] = {5,4,1,3,2};
  
//    insertionSort(arr,5);

//    for (int i = 0; i < 5; i++)
//    {
//           cout<<arr[i];
//    }
   
   
//    return 0;

// }




// 4.  count sort -> use a frequency count of  element from min to max.




void countSort(int *arr , int n){

           
      int freq[10000] = {0};

      int min_val = INT_MAX;

      int max_val = INT_MIN;

      for (int i = 0; i < n; i++)
      {
           max_val = max(max_val ,arr[i]);
           min_val =  min(min_val , arr[i]);
      }
      


      for (int i = 0; i <n; i++)
      {
          freq[arr[i]]++;
      }
            int j =0;

           for (int i = 0; i < 6; i++)
           {
             
            
              while (freq[i]>0)
              {
                 arr[j] = i;
                 
                 j++;

                 freq[i]--;
              }
              
               
           }
           

}




int main(){

  int arr[] = {5,4,1,3,2};
  
     countSort(arr,5);

   for (int i = 0; i < 5; i++)
   {
          cout<<arr[i];
   }
   
   
   return 0;

}