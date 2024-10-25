#include<iostream>
#include<vector>
#include<set>
#include<string>

using namespace std;

struct FarmerCrops
{
      string name;
      vector<string> crops;    
};

void addFarmer( vector <FarmerCrops> &farmers ,  string name ,  vector<string> crops){
       
        FarmerCrops farmerdata = {name , crops};

        farmers.push_back(farmerdata); 


}

void displaydata( vector <FarmerCrops> &farmers){
            
            for(auto farmer:farmers){
                cout<<"farmer "<<farmer.name<<" ";

               for(auto crop : farmer.crops){
                   cout<<crop<<" ";
               }

               cout<<endl;
                 
            }
            

}

 


 set <string> getUniqueCrops(vector <vector<string>> &croplists){

             set <string> uniqueCrops;

             for(auto crops:croplists){

                  for(auto crop:crops){
                      
                      uniqueCrops.insert(crop);

                  }
             }
         
         return uniqueCrops;

 }

int main(){
       
       vector <FarmerCrops>  farmers;

       addFarmer( farmers , "ramesh" , {"Wheat" , "Rice" ,"Maize"});
       addFarmer( farmers , "sita" , {"wheat" , "cotton"});
   
      displaydata(farmers);
        
vector< vector<string>> croplists = {{"wheat" , "Rice" , "maize"} , {"wheat" , "cotton"}, { "rice" , "barley"}};


 set<string> uniqueCrops = getUniqueCrops(croplists);


   for(auto crop: uniqueCrops){
           cout<<crop<<" ";
   }

    return 0;
}