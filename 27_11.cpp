#include <iostream>
#include <algorithm>
using namespace std;

// void reverse(int arr[], int n)
// {

//     int st = 0;
//     int end = n - 1;

//     while (st < end)
//     {
//         int temp = arr[end];

//         arr[end] = arr[st];

//         arr[st] = temp;

//         st++;
//         end--;
//     }
// }

// void occurance(int arr[] , int n){

//              int freq[100] = {0};

//      for (int i = 0; i < n; i++)
//      {
//           freq[arr[i]]++;
//      }

//     cout<<"element appear odd number of time"<<endl;

//     for (int i = 0; i < 100; i++)
//     {
//           if (freq[i] > 0)
//           {
//              if (freq[i] % 2 != 0)
//              {
//                  cout<<i<<"element "<<"occure "<<freq[i]<<"times"<<endl;
//              }

//                if (freq[i] == 1)
//                {
//                    cout<<i<<"element"<<"occure one time"<<endl;
//                }

//           }

//     }
// }

void remove_dup(int arr[], int n)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool isdup = false;
        
        // if (arr[i]%2 != 0)
        // {                            // this is used for specifi element remove
        //     isdup = true;
        // }
        
        for (int j = 0; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                isdup = true;                // used to remove duplicate elements
                break;
            }
            
        }
        


        if (!isdup)
        {
            arr[count++] = arr[i];
        }
        
    }
    

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<",";
    }
    




}

int main()
{

    /**  Q.1 reverse any array  */

    //     int arr[] = {19, 18, 17, 16, 15};

    //     int n = sizeof(arr) / sizeof(arr[0]);

    //     reverse(arr, n);

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << ",";
    //     }

    //     cout << endl;
    //     int arr1[] = {19, 18, 17, 16, 15, 14, 13, 12, 10, 99};

    //     int m = sizeof(arr1) / sizeof(arr1[0]);

    //     reverse(arr1, m / 2);

    //     for (int i = 0; i < m; i++)
    //     {
    //         cout << arr1[i] << ",";
    //     }

    /** Q.2 Given an array where every element occurs twice except one, find the element that appears an odd number of times */

    int arr[] = {2, 2, 2, 3, 3, 4, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    // occurance(arr, n);

    /** Q.3 Print the frequency of each element in an array. */

    /** Q.4 Given an array of integers, remove all duplicates of odd numbers only and return the unique elements in the same order. */

    remove_dup(arr, n);

    return 0;
}