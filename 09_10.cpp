#include<iostream>
#include<vector>
#include<map>

using namespace std;




/*
  Define a structure Employee with fields: id, name, and salary. 
  Write a C++ program that stores the details of 5 employees in an array of structures and 
  prints the employee details with the highest salary.
*/



struct employee
{
     int id;
    string name;
    double salary;
};




int main(){

      employee emp[] = {
             
             {1,"sunil",300000},
             {2, "amit ", 90000},
             {3,"rahul",45000},
             {4,"anil",90000},
             {5,"mayank",89000}


      }; 


      double maxsal = 0;

    vector <string> name;


      for (int i = 0; i < 3; i++)
      {
          if (emp[i].salary > maxsal)
          {
              name.clear();
              maxsal = emp[i].salary;
              name.push_back(emp[i].name);
          }
          
      }
       
       for(auto it:name){
          cout<<it<<"  ";
       }
    
    cout<<maxsal<<endl;

         for( auto it:emp){
         if (it.salary ==  maxsal)
         {
             cout<<it.id<<" "<<it.name<<" "<<it.salary<<endl;
        }
   

         }


 /*Create a program where you have a vector of integers. Use a map to store the frequency of each integer. 
     Print the integers with their frequencies in descending order of their occurrence.  */

 vector<int> arr = {1,1,1,2,2,4,4,4,6,7,8,8,8};



 map <int,int> freq;




  for (int i = 0; i < arr.size(); i++)
  {
      freq[arr[i]]++;
  }
   

   
   

/*

 Given a structure Student with fields: id, name, and marks,
 write a program that uses a map to store student information with the student ID as the key.
 The program should print the name of the student with the highest marks.
 
*/

struct student
{
    int id;
    string name;
    double  marks;
};


map<int,student> st  = {
    
    {1,{1,"sunil",90}},
    
     {2,{2,"amit",91}},
     {3,{3,"rahul",80}}
    
    }; 

    double h_marks = -1;

vector<int> name_hmark;

for(auto it: st){
        
    if (it.second.marks > h_marks)
    {
           name_hmark.clear();
         h_marks = it.second.marks;
           name_hmark.push_back(h_marks);        
          
    }
    
}

  for(auto it:name_hmark){
       cout<<"name of student have highest marks"<<it<<endl;
  }

/*
  Given an array of integers, convert it into a vector and print the sum of all elements using a for loop.
*/

  
      int arr[] = {2,3,4,5,6,7};

      int n = sizeof(arr)/sizeof(arr[0]);

         
    
   



    return 0;
}