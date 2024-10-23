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




int main(){

   multiset <int> s = {1,2,2,3,4,5,5,5};

   int target = 5;

     int count =  s.count(target);

      cout<<count<<endl;

    return 0;
}

