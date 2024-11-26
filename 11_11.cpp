#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{

  map<string, string> bestplayers = {
      {"sunil", "male"},
      {"sneha", "female"},
      {"ritika", "female"},
      {"rahul", "male"}

  };

  for (auto it : bestplayers)
  {

    cout << it.first << " " << it.second;
    cout << "\n";
  }

  // another example

  cout << "\n"
       << "\n"
       << "name" << " " << "age" << " " << "gender" << endl;

  map<string, pair<int, string>> bestplayers1 = {

      {"anil", {23, "male"}},
      {"sunil", {22, "male"}},
      {"rahul", {24, "male"}},
      {"sneha", {23, "female"}}

  };

  for (auto it : bestplayers1)
  {
    cout << it.first << " " << it.second.first << " " << it.second.second << endl;
  }

  // h.w = 3

  cout << "\n \n \n"
       << "H.W = 3" << endl;

  struct category
  {
    int number;
    string item;
  };

  struct person
  {
    string name;
    vector<category> categories;
  };

  vector<person> table;

  person alice;

  alice.name = "Alice";

  alice.categories = {{25, "Apple"}, {28, "Orange"}};

  person bob;

  bob.name = "Bob";

  bob.categories = {{26, "Banana"}, {34, "Grapess"}};

  table.push_back(alice);
  table.push_back(bob);

  cout << "name  " << "category" << endl;

  for (auto it : table)
  {

    cout << it.name + "  ";

    cout << "{";

    for (auto el : it.categories)
    {
      cout << "{";
      cout << el.number << "," << el.item;
      cout << "}";
    }

    cout << "}" << endl;
  }


  

  return 0;
}
