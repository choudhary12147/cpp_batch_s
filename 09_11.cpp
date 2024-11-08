#include<iostream>
#include<vector>
using namespace std;



// higher order datastructure




int main(){

  vector<vector<float>> weight = {
               
               {56,58,96,78,65},
               {96,78,96,56,52},
               {65,45,56,76,78}
       
  };

vector<string> states = {"panjab","hariyana","rajasthan"};


for (int i = 0; i < 3; i++)
{
      cout<<states[i]<<" ";

      for (int j = 0; j < 5; j++)
      {
            cout<<weight[i][j]<<",";
      }
      
      cout<<endl;
}


vector <vector<int>> marks = {
       {96,76,78,92},
       {56,26,96,78},
       {96,99,89,79}
};


   vector<string> classes = {"classA" , "classB" , "classC"};

   for (int i = 0; i < classes.size(); i++)
   {
          cout<<classes[i]<<" ";

          for (int j = 0; j < marks[i].size(); j++)
          {
                cout<<marks[i][j]<<",";
          }
          
          cout<<endl;
            
   }
   

   cout<<"\n"<<"\n"<<"hw2"<<"\n";


   vector<int> age = {20,21,22};

   vector<string> name = {"anil","sunil","rahul"};

    vector<vector<int>> marks1 = { 
             
             {90,89,78,60},
             {94,93,84,28},
             {56,78,38,49}
       
    };


    for (int i = 0; i < name.size(); i++)
    {
          cout<<name[i]<<" ";

          cout<<age[i]<<" ";

            cout<<"{";
          for (int j = 0; j < marks1[i].size(); j++)
          {
                 cout<<marks1[i][j]<<",";
          }
          cout<<"}";
          
          cout<<endl;
    }
    

cout<<"\n"<<"\n"<<"H.W 3"<<"\n";

 
 vector<vector<string>> fruits = {
        {"apple" , "banana" ,"kiwi"},
        {"grapes","gavava","papaya"},
        {"pinepple","watermelon","orange"}
 };

 vector<int> price = {200,100,50};

 vector<int> quantity = {3,4,5};

 vector<int> totalprice;

 for (int i = 0; i < 3; i++)
 {
      totalprice.push_back(price[i]*quantity[i]);
 }
 



 for (int i = 0; i < fruits.size(); i++)
 {
      cout<<i<<" ";
     cout<<"[";

     for (int j = 0; j < fruits[i].size(); j++)
     {
           cout<<fruits[i][j]<<",";
     }
     cout<<"]"<<" ";
     cout<<quantity[i]<<" ";
     cout<<totalprice[i];

     cout<<endl;

 }
 



 cout<<"\n"<<"\n"<<"H.W4"<<endl;



 vector<vector<vector<string>>> iteam = {
         {
            {"apple","banana"},
            {"kiwi","orage"}

         },
         {
            {"potato","tomato"},
            {"onion","cabbage"}
         }

 };


  vector<string> des = {
        "fruits are very healthy",
        "vegitable are good for health"
  };


  vector<int> _quantity = {3,2};

  vector<int> _price = {200,400};

  vector<int> total_price;

  for (int i = 0; i < 2; i++)
  {
      total_price.push_back(_quantity[i]*_price[i]);
  }
  


for(auto v2:iteam){

      for(auto v1:v2 ){
            
            for(auto it:v1){
                    cout<<it<<",";
            }

      }

     cout<<" " ;

     

}





    return 0;
}



