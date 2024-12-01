#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

/**
Write a structure Student with the following members:
id (integer)
name (string)
marks (float)
Create a variable of this structure, initialize it, and print its values
*/

struct student
{
    int id;
    string name;
    float marks;
};

int main()
{

    student std;

    std.name = "sunil";
    std.id = 407242;
    std.marks = 83.00;

    cout << std.name << " " << std.id << " " << std.marks << endl;

    // also initialize like this

    std = {34567, "amit", 78.00};

    cout << std.name << " " << std.id << " " << std.marks << endl;

    student arr[] = {{1234, "anil", 78.00}, {5674, "rahul", 90.00}, {56793, "sumit", 78.90}};

    cout << "\n \n";

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].name << " " << arr[i].id << " " << arr[i].marks << " " << endl;
    }

    cout << "\n \n";

    /**Write a structure Address with members city and pincode.
     *  Then define a Person structure containing name and Address.
     *  Initialize a Person object and access all its values. */

    struct Address
    {
        string city;
        int pincode;
    };

    struct person
    {
        string name;
        Address add;
    };

    person arr1[] = {{"sunil", {"sikar", 332404}}, {"amit", {"jaipur", 344001}}};

    for (int i = 0; i < 2; i++)
    {
        cout << arr1[i].name << " " << arr1[i].add.city << " " << arr1->add.pincode << " " << endl;
    }

    /** Create a map<int, string> to store student roll numbers and their names. Initialize it with at least 3 entries.:
   Perform the following on a map<int, string>:
   Insert a new pair.
   Find an element by its key.
   Erase an element */

    map<int, string> student = {

        {2345, "sunil"},
        {7895, "amit"},
        {7856, "rahul"}

    };

    for (const auto &pair : student)
    {
        cout << pair.first << " " << pair.second << endl;
    }

    student.insert({8769, "anil"});

    for (const auto &pair : student)
    {
        cout << pair.first << " " << pair.second << endl;
    }

    cout << student[2345] << endl;

    student.erase(2345);

    for (const auto &pair : student)
    {
        cout << pair.first << " " << pair.second << endl;
    }

    cout << "\n \n";

    /*
     Create a vector<int> and initialize it with the values {10, 20, 30, 40, 50}.:
  Perform the following operations on the vector:
  Add a new element at the end.
  Insert an element at the second position.
  Erase the third element.
    */

    vector<int> vec = {10, 20, 30, 40, 50};

    // 1

    vec.push_back(60);
    for (auto it : vec)
    {
        cout << it << ",";
    }
    cout << endl;

    // 2

    vec.insert(vec.begin() + 1, 45);

    for (auto it : vec)
    {
        cout << it << ",";
    }
    cout << endl;

    // 3

    vec.erase(vec.begin() + 2);

    for (auto it : vec)
    {
        cout << it << ",";
    }
    cout << "\n \n \n";

    /*
    Create a vector<pair<int, string>> to store product IDs and their names. Initialize and display the elements.
    */

    vector<pair<int, string>> product = {

        {2314, "sunil"},
        {5636, "amit"},
        {7578, "anil"}

    };

    cout << "id  " << "name  " << endl;

    for (int i = 0; i < product.size(); i++)
    {
        cout << product[i].first << "  " << product[i].second << endl;
    }

    // Create a set<int> and initialize it with the values {15, 10, 20, 10, 5}. Print the elements of the set.:

    set<int> s = {15, 10, 20, 10, 5};

       
      for(auto it:s){
           cout<<it<<",";
      }

  cout<<"\n";
      /*
        Insert a new value.
        
      */
       


      s.insert(45);

    for(auto it:s){
           cout<<it<<",";
        }


/**
   Find an element.
 */


      int toFind = 10;

    if (s.find(toFind) != s.end()) {
          cout<<"found"<<endl;
    } else {
         cout<<"not found"<<endl;
    }

/*
 Remove an element.
*/

  s.erase(5);

  for(auto it:s){
           cout<<it<<",";
        }



    return 0;
}