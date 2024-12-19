


/*
 Write a C++ program to dynamically allocate memory for a structure Employee that contains id, name, and salary.
  Input details for the employee and display them. Remember to deallocate memory afterward
*/


// #include<bits/stdc++.h>

// using namespace std;

// struct Employee
// {
//     int e_id;
//     string e_name;
//     double e_salary;
// };




// int main(){

//     Employee *e1 = new Employee();

//     cout<<"enter employee id"<<endl;
//     cin>>e1->e_id;
//     cout<<

   

//     return 0;
// }

/*
Create a structure Book with fields title, author, and price. Dynamically allocate an array of n books.
 Input the details and display them. Free the allocated memory at the end
*/

// #include<bits/stdc++.h>

// using namespace std;


// struct Book
// {
//      string title;
//      string author;
//      double price;

// };

// int main(){

//          int n;
//          cin>>n;     
  
//     Book *b1 = new Book[n];

    
//    for (int i = 0; i < n; i++)
//    {
//        cout<<"author name"<<endl;
//       cin>>b1[i].author;
//       cout<<"title"<<endl;
//       cin>>b1[i].title;
//       cout<<"price"<<endl;
//       cin>>b1[i].price;

//    }

//    for (int i = 0; i < n; i++)
//    {
//        cout<<"author name"<<endl;
//         cout<<b1[i].author;
//       cout<<"title"<<endl;
//       cout<<b1[i].title;
//       cout<<"price"<<endl;
//       cout<<b1[i].price;

//    }
   
//     return 0;
// }


/*
  Define a class Student with name, rollNumber, and grade. 
  Dynamically create an instance of the class, input the details, and display them. Free the memory using delete
 */

// #include<bits/stdc++.h>

// using namespace std;
 
// class Student{
//      string name;
//      double roll_num;
//       char grade;

//       public:

//       void getvalue(string name1 , double roll, char grad){
              
//               this->name = name1;
//               this->grade = grad;
//               this->roll_num = roll;

//       }

//       void display(){
//             cout<<name<<" "<<roll_num<<"  "<<grade<<endl;

//       }


// };

//  int main(){

        

//    Student *s1 = new Student();

//     s1->getvalue("sunil" , 67.45,'c');
//     s1->display();


//     delete s1;


//   return 0;
//  }


/*
  
   Create a class Product with attributes productId, productName, and price.
    Dynamically allocate memory for an array of products. Input details for each product and display them.
     Deallocate the memory afterward

*/
// #include<bits/stdc++.h>
// using namespace std;

// class Product{
    
//     public:

//         int p_id;
//         string name;
//         double price;



//         Product(int id, string name ,double price ){
              
//                this->p_id = id;
//                this->name = name;
//                this->price = price;

//         }

//             void display(){
//                     cout<<p_id<<" "<<name<<" "<<price<<endl; 

//             }


// };

// int main(){

//   Product *p1 = new Product(1002,"sunil",78000);

//   p1->display();

//   delete p1;

//   return 0;
// }

/*
Write a program that dynamically allocates a structure Car containing fields model, year, and mileage.
 Assign values and display the car's details. Ensure you free the allocated memory

*/

// #include<bits/stdc++.h>

// using namespace std;

// struct Car
// {
//     string model;
//     int year;
//     int mileage;
     
//      Car(string model , int year , int mileage){
            
//             this->mileage = mileage;
//             this->model = model;
//             this->year =  year;

//      }

//      void display(){

//             cout<<mileage<<" "<<year<<" "<<model<<endl;

//      }


// };




// int main(){
  
//      Car *c1 =  new Car("dghs",89495,4894);

//       c1->display();

//       delete c1;


//   return 0;
// }

/*
Q.6Define a class Patient with attributes patientId, name, and age. 
Dynamically allocate an array of patients, input their details, and display all records.
 Free the memory using delete[]

*/

 #include<bits/stdc++.h>

 using namespace std;

class Patient{
           
           int id;
           string name;
           int age;

};



 int main(){

           int n =5;

     Patient *p1 =  new Patient[n];

          
          for (int i = 0; i < n; i++)
          {
             cin>>p1->name
          }
          
      


     delete [] p1;


  return 0;
 }



/*
 Q.7  Create a structure BankAccount with fields accountNumber, holderName, and balance.
 Allocate memory for a single account, update the balance, and display the details. Free the memory afterward
*/

/*
Q.8 Define a class Teacher with name, subject, and experience (in years). 
Dynamically allocate an array for storing n teachers' data.
 Input details and display them. Ensure proper memory deallocation.
*/

/*
*/