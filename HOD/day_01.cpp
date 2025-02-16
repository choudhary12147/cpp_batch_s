#include<bits/stdc++.h>

using namespace std;

//1. vector


// int main(){

//      //vector

//      vector<int> arr = {2,5,1,3,5};

//     //  arr.push_back(1);

//     //  for (int i = 0; i < 4; i++)
//     //  {
//     //         cin>>arr[i];
//     //  }
     
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     // vector<int> ::iterator it;

//     // for(it = arr.begin();it!=arr.end();it++){
//     //       cout<<*it;
//     // }
     
//     vector<int> arr2 (3,50);
   
      
//       for(auto it:arr2){
//         cout<<it<<" ";
//       }
    
//     //   swap(arr,arr2);

//        sort(arr.begin(),arr.end());
       
//        for(auto it:arr){
//         cout<<it<<" ";
//        }

//     return 0;
// }



//2. pair




// bool compare(pair<int,int> p1, pair<int,int> p2){
      
//       return p1.first < p2.first;

// }

// int main(){

//   // sort the array with accutal index

//   int arr[] = {2,1,5,3,9,4};
//   int n = sizeof(arr)/sizeof(arr[0]);
  
//     vector<pair<int,int>> v;

//    for (int i = 0; i < n; i++)
//    {
//         v.push_back(make_pair(arr[i],i));
//    }
   

//    sort(v.begin(),v.end());
   
//     for(auto it:v){
//           cout<<it.first<<" "<<it.second<<endl;
//     }
     
//     return 0;
// }



// 3. set

// int main(){

//      set<int> s;
//      s.insert(1);
//      s.insert(2);
//      s.insert(3);
//      s.insert(5);
//      cout<<*s.lower_bound(2)<<endl;
//      cout<<*s.upper_bound(1)<<endl;

//        auto it = s.find(2);
 
//          if (it!=s.end())
//          {
//               cout<<"element found"<<endl;
//          }
//         cout<<s.count(3)<<endl;
//         cout<<'size is'<<s.size()<<endl;
//         s.clear();
//         cout<<(s.empty()? "set is empty":"set is not empty")<<endl;      
        
//     return 0;
// }

// questions

/*
1.convert vector to set and remove all the duplicates
2. convert vector to  set and find the element present or not
3. convert vector to set and check if set is empty or not 
4. calculate the occurrence of and element inside set 
5. take two vectors and find the common elements from them 
6. take 3 vectors and merge them without duplicates
7. take 2 vectors and find the duplicates 
8. take 3 vectors and make a set having elements that are present on vector 1 but vector2 and common elements from vector 3
*/

int main(){

    //1
    vector<int> vec = {2,1,6,3,8,4};

     set<int> s;

     s.insert(vec.begin(),vec.end());
    
     for(auto it:s){
        cout<<it<<" ";
     }

    //2
     
      auto it = s.find(6);

      if (it!=s.end())
      {
          cout<<"found"<<endl;
      }
      
       cout<<(s.empty()?"set is empty":"set is not empty")<<endl;
      
     return 0;
}
