#include<iostream>
#include<vector>
#include<map>


using namespace std;

int main(){

    map<string,string> bestplayers = {
            {"sunil" , "male"},
            {"sneha","female"},
            {"ritika","female"},
            {"rahul","male"}

    };

    for(auto it:bestplayers){

        cout<<it.first<<" "<<it.second;
        cout<<"\n";

    }


    // another example
     
     cout<<"\n"<<"\n"<<"name"<<" "<<"age"<<" "<<"gender"<<endl;

    map<string, pair<int,string>> bestplayers1 = {
              
              {"anil",{23,"male"}},
              {"sunil",{22,"male"}},
              {"rahul",{24,"male"}},
              {"sneha",{23,"female"}}


    };

  for(auto it:bestplayers1){
         cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
  }










    return 0;
}
