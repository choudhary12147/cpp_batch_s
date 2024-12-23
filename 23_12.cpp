#include <bits/stdc++.h>

using namespace std;

/*
     Create a class Course with attributes:
          courseName (string)
          courseCode (string)
      Use a vector to store the details of 3 courses. Write a program to display all course details.
*/

// class Course
// {

// private:
//      string CourseName;
//      string CourseCode;

// public:
//      Course(string name, string code)
//      {
//           CourseName = name;
//           CourseCode = code;
//      }

//      void display()
//      {

//           cout << "course name " << CourseName << "course code" << CourseCode << endl;
//      }
// };

// int main()
// {

//      vector<Course> courses;

//      courses.push_back(Course("amit", "math36"));
//      courses.push_back(Course("anil", "tej2"));
//      courses.push_back(Course("rahul", "35sj"));
//      courses.push_back(Course("sunil", "wnj4"));

//      for (auto course : courses)
//      {
//           course.display();
//      }

//      return 0;
// }


/*
         Create a class Rectangle with attributes:
           length (float)
           breadth (float)
Write a parameterized constructor to initialize these attributes.
Add a method area() to calculate and return the area of the rectangle. Create an object and display the area.

*/

#include<bits/stdc++.h>

using namespace std;



class Rectangle{
       float length;
       float breadth;

       public:

        Rectangle(float length , float breadth){
              this->length = length;
              this->breadth = breadth;

        }

        float area(){
           
              return length*breadth;

        }

        void display(){
               cout<<"area is"<<area();

        }

};



int main(){

      Rectangle react( 1.4 , 6.7 );
  
          react.display();

     return 0;
}


