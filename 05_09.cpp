#include<iostream>
#include<vector>
using namespace std;

/*
   find minimum element in  vector
*/


// int main(){
     
//      vector <int> array(5);

//     //  array[1] = 500;

//        for (int i = 0; i < 5; i++)
//        {
//            cout<<"emter the element "<<i;
//            cin>>array[i];
//        }
       
//         for(int j : array){
//             cout<<j<<endl;
//         }

//        int min = INT16_MAX;

//         for (int j:array)
//         {
//                 if (j < min)
//                 {
//                     min = j;
//                 }
                
//         }
          
//           cout<<"min element is :"<<min<<endl;
        

//     return 0;
// }



/*
   remove duplicate element of array
*/

void removeduplicate(int arr[] , int &n){

            if (n == 0)
            {
                return;
            }

            int j = 0;

            for (int i = 1; i < n; i++)
            {
                 if (arr[i] != arr[j])
                 {
                      j++;
                      
                      arr[j] = arr[i];

                 }                 
                 
            }

          n = j+1;      
            
}

int main(){
     
    int arr[] = {10,10,20,30,30};

    int n = sizeof(arr)/sizeof(arr[0]);

    removeduplicate( arr, n); 
    
      cout<<"Unique elements:";

      for (int i = 0; i < n; i++)
      {
          cout<<arr[i]<<" ";
      }
       
       cout<<endl;

   return 0;
}
    





/*
       constrator  oops
*/


