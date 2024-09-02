#include<iostream>

using namespace std;

int main(){
   
   int a, b;

   int arr[] = {1,2,3,3,4,4,5,5};

    a = end(arr)-begin(arr);

   for (int i = 0; i < a; i++)
   {
      for (int j = i+1; j < a; j++)
      {
           if ( arr[i] == arr[j])
           {
               b = arr[i];

               cout<<b<<endl;
           }
           
      }
      
   }
   

    return 0;
}