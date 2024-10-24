#include<iostream>
#include<vector>
#include<set>

using namespace std;



// 1.convert vector to set and remove all the duplicates




// int main(){
     
//        vector <int> vec = {1,1,2,2,3,3};


//         set <int> s(vec.begin() , vec.end()) ;

           
//            for(auto it : s){
                
//                 cout<<it<<" "<<endl;

//            }

//            //  after this again copy to vector

//            vec.assign(s.begin(),s.end());

//            for(auto it:s){
//                cout<<it<<" ";
//            }

   

//     return 0;
// }





// 2. convert vector to  set and find the element present or not?




// void isPresent( set <int> s , int ele){
          
//             for(auto it :s){
                 
//                  if (it == ele)
//                  {
//                      cout<<"element persent"<<endl;
//                  }
                 

//             }
            

// }


// int main(){

//  vector <int> vec = {5,5,6,6,4,3};

//  set <int> s (vec.begin(), vec.end());

//      int ele;

//      cin>>ele;

//     isPresent(s,ele);
  

// return 0;

// }



// 3   convert vector to set and check if set is empty or not 


// void check(set <int> s){
        
//         if (s.empty())
//         {
//             cout<<"empty"<<" ";
//         }else
//         {
//             cout<<"not empty";
//         }
        
    
// }



// int main(){
  
//   vector <int> vec = {1,1,2,2,4,5,5};

//       set <int> s (vec.begin() , vec.end());

//       check(s); 


//     return 0;
// }




// 4 calculate the occurrence of and element inside set 




// int main(){

//      set <int> s = {1,2,3,4,5};

//      int ele = 6;

//       if ( s.find(3) != s.end())
//       {
//           cout<<"element in set";

//       }else
//       {
//         cout<<"element not persent";
//       }
              
//     return 0;
// }



int main(){

  set <int> s;

  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);


    cout<<*s.upper_bound(3)<<endl;
    cout<<*s.lower_bound(5)<<endl;
    cout<<*s.upper_bound(5)<<endl;
    cout<<(s.upper_bound(5) == s.end())<<endl;

    for (auto i = s.begin(); i != s.end(); i++)
    {
            cout<<*i; 
    }
  
  cout<<endl;

  // for (int i = 0; i < s.size(); i++)    
  // {
  //     cout<<s[i];                   not allowed in set but in vector
  // }
  

 for(auto it : s){
          cout<<it;
 }
cout<<endl;



  //custome comparator for decresing order


  set <int , greater<int>> s1;

      s1.insert(1);
      s1.insert(2);
      s1.insert(3);

      for(auto it : s1){
          cout<<it<<" ";

      }

      cout<<endl;
  




    vector <int> vec ;

      vec = {3,4};

    vec.push_back(1);
    vec.push_back(2);

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i];
    }
    
    cout<<endl;

    for (auto i = vec.begin(); i !=  vec.end(); i++)
    {
             cout<<*i;
    }
    
    cout<<endl;

    // vector to set

    set <int> s2 (vec.begin(),vec.end());

    for(auto it : s2){
      cout<<it;
    }
    cout<<endl;

    

return 0;

}