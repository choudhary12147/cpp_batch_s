



// #include <bits/stdc++.h>

// using namespace std;


// int main()
// {

    /*Q.1 Given a vector of integers, write a program to sort the vector in descending order and
     remove duplicate values using the unique method from the STL.*/

    // vector <int> arr = {1,70,4,6,7,8,13,15,6,16,70};

    //    sort(arr.rbegin(),arr.rend());

    //    auto it = unique(arr.begin(),arr.end());

    //    arr.erase(it,arr.end());

    //    for(auto it:arr){
    //       cout<<it<<" ,";
    //    }
    //    cout<<"\n \n";

//     return 0;
// }




    /*
    Define a structure Book with fields title, author, and price.
    Write a program that stores 5 books in an array of structures and sorts
    the books by their titles alphabetically using a custom sorting function

    */

// #include<bits/stdc++.h>

// using namespace std;

// struct Book
// {
//     string title;
//     string author;
//     double price;
// };

//  bool cmpfnx( const Book & a,  const   Book & b)
//     {
//         return a.title < b.title;
//     }




//    int main(){


    
//     Book books[] = {
//         {"c++", "mohit", 2},
//         {"Alogrithm", "sunil", 6000},
//         {"Introduction to css", "kstij", 150},
//         {"shift to the  real world", "shubam", 69},
//         {"data structure" , "anjali",500}

//     };
  
  
//   sort(books, books + 5, cmpfnx);

  
//   for( const auto it: books){
//      cout<<it.title<<",";
//   }



//   return 0;
//    }


/*
 Write a C++ function that takes a vector of integers as a parameter and returns true if there 
 are any duplicate numbers, otherwise returns false.

*/

// #include<bits/stdc++.h>

// using namespace std;

// vector <int> vec = {1,8,9,1,2,2,3,3};

// vector <int> res;

// int main(){ 

//  for(int i = 0;i < vec.size();i++){
          
//           bool is_present = false;
            
//        auto it = find(res.begin(),res.end() ,vec[i]);

        

//         if (it == res.end())
//         {
//             res.push_back(vec[i]);
//         }
        
    

//    }


// for( auto it: res){
//       cout<<it<<",";
// }


//     return 0;
// }


/*
  Define a structure Employee with fields id, name, and salary. 
  Write a C++ program to store details of 5 employees in an array of structures
   and print the employee with the longest name

*/
  
// #include<bits/stdc++.h>

// using namespace std;

// struct Employee
// {
//      int id;
//      string name;
//      double salary;
// };





// int main(){

//    Employee em[] = {
//         {1001,"sunil" , 90000},
//         {1002,"amit",80000},
//         {1003,"anil",76000},
//         {1004,"rahul",89000},
//         {1005,"mayankh",100000}

//    };

//     int idx = 0;

//     for (int i = 0; i < 5; i++)
//     {
//            if (em[i].name.length() > em[idx].name.length())
//            {
//                    idx = i;  
//            }
           
            
//     }

//     cout<<"id: "<<em[idx].id<<" name: "<<em[idx].name<<" salary: "<<em[idx].salary<<endl;
    

//     return 0;
// }


/*
Given a vector of integers, use a map to count how many numbers are odd and how many are even. Print the counts.
*/


// #include<bits/stdc++.h>

// using namespace std;


// int main(){

//    vector<int> vec = {1,1,1,2,2,3,3,4,4,6,7,8,9,21};


//    map<string,int> freq;


//       for (int i = 0; i < vec.size(); i++)
//       {
//            if (vec[i]%2 == 0)
//            {
//                freq["even"]++;
//            }else{
//              freq["odd"]++;
//            }
           
//       }
      
//       for(auto it: freq){
//           cout<<it.first<<","<<it.second;

//       }


//     return 0;
// }


/*
  Define a structure Product with fields ProductID, ProductName, and Price.
   Create a vector to store 10 products. Write a program to print all products whose price is within a given range.
*/

// #include<bits/stdc++.h>

// using namespace std;

// struct Product
// {
//     int id;
//     string name;
//     double Price;
// };



// int main(){
    
//     vector <Product> prod = {
//         {1, "Product_A", 25.50},
//         {2, "Product_B", 50.00},
//         {3, "Product_C", 75.25},
//         {4, "Product_D", 100.00},
//         {5, "Product_E", 150.75},
//         {6, "Product_F", 200.00},
//         {7, "Product_G", 250.50},
//         {8, "Product_H", 300.00},
//         {9, "Product_I", 350.75},
//         {10, "Product_J", 400.00}

//     };


//       for(auto it: prod){
             
//              if (it.Price < 200.00)
//              {
//               cout<<it.id<<" ,"<<it.name<<" ,"<<it.Price<<endl;
//              }
         
//       }
       


//     return 0;
// }

/*
Define a structure Book with fields title, author, and price. 
Write a program that stores 5 books in an array of structures and
 sorts them by the author's name in ascending order using a custom sorting function. in cpp easy solution
*/



#include<bits/stdc++.h>

using namespace std;

struct Book
{
      string title;
      string author;
      double price;
};


bool cstfun( Book &b1 , Book &b2 ){
      
       return b1.author < b2.author;      
}




int main(){

     Book books[] = {
            
        {"The Great Gatsby", "F. Scott Fitzgerald", 10.99},
        {"1984", "George Orwell", 8.99},
        {"To Kill a Mockingbird", "Harper Lee", 12.50},
        {"Pride and Prejudice", "Jane Austen", 9.75},
        {"Moby-Dick", "Herman Melville", 15.99}

     };

       
       sort(books,books+5,cstfun);


       for( auto it : books){
            cout<<it.title<<",";
         
       }





     

  return 0;
}