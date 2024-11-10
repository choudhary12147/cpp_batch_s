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



cout<<"\n"<<"\n"<<"h.w2"<<endl;


vector<vector<string>> data1 = {
          {"female","cancer"},
          {"female","hypothetinA"},
          {"male","cough"},
          {"female","cough"},
          {"male" , "cancer"},
          {"male","hypothetinA"}
};


map<string,int> gender_mapping ={

      {"female",0},
      {"male",1}
};

map<string,int> disease_mapping = {
      {"cancer",0},
      {"hypothetinA",1},
      {"cough",2}
};

vector<vector<int>> encodeddata1;

for(auto it:data1){
         
      int gender_code = gender_mapping[it[0]];
      int disease_code = disease_mapping[it[1]];

      encodeddata1.push_back({gender_code,disease_code});

}






for(auto v1: encodeddata1){

      for(auto it:v1){
          cout<<it<<" ";
      }
      cout<<endl;
}

cout<<"\n"<<"h.w3"<<endl;

vector<vector<string>> data2 = {
     {"lion" , "savannah"},
     {"pengium","antartica"},
     {"shark","ocen"},
     {"elephant","savannah"},
     {"polarbear","antartica"}   
};



map<string,int> animal_maping = {
       {"lion",0},
       {"pengium",1},
       {"shark",2},
       {"elephant",3},
       {"polorbear",4}
};

map<string,int> habit_mapping = {
      {"savannah",0},
      {"antartica",1},
      {"ocen",2}
};

vector<vector<int>> encodeddata2;

for(auto it:data2){
       int animal_code = animal_maping[it[0]];
       int habit_code = habit_mapping[it[1]];

           encodeddata2.push_back({animal_code,habit_code});
}


for(auto it: encodeddata2){
    for(auto i:it){
        cout<<i<<" ";
    }
    cout<<endl;
}





    return 0;
}