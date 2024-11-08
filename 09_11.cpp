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
   





    return 0;
}



