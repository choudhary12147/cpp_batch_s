#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

      vector<vector<string>> data = {
           {"red","small"},
           {"blue","medium"},
           {"green","large"},
           {"blue","small"},
           {"red","large"}

      };

map<string,int> colormapping = {
    {"red",0},
    {"blue",1},
    {"green",2}
};

map<string,int> sizemapping = {
          {"small",0},
          {"medium",1},
          {"green",2}    
};

vector<vector<int>> encodeddata;

for(auto it : data){
           
         int colour_code = colormapping[it[0]];
         int size_code = sizemapping[it[1]];

         encodeddata.push_back({colour_code,size_code});

      
}


 for(auto v1:encodeddata){
    for(auto it:v1){
           cout<<it<<" ";
    }
       
       cout<<endl;

 }


    return 0;
}