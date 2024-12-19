#include<bits/stdc++.h>

using namespace std;


/*
Create a class Student with attributes name and score. Use a parameterized constructor to initialize these attributes.
 Dynamically allocate an array of m students and display the student with the highest score
*/

class Student{

    public:
         
           string name;
           int score;

         Student(string name , int score){
               name = name;
               score = score;
         }  
          
};




int main(){

    int n =5;

     Student*students = new Student("sunil",56);

     
     cout<<students->name<<students->score<<endl;


     delete students;  
    
              
  

    return 0;
}