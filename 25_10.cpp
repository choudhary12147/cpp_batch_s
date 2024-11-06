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




vector <string> findFarmersByCrop( vector <FarmerCrops> & farmers , string crop ){

         vector <string> result;


         for(auto farmer : farmers){
                 

                 for(auto crop1 : farmer.crops){
                       
                       if (crop1 == crop)
                       {
                           result.push_back(farmer.name);
                       }
                       
                       
                 }      
                       

         }


        return result;

}



void removeduplicate( vector <FarmerCrops> & farmer){


       set <string> unique (farmer.crops.begin(), farmer.crops.end());

        farmer.crops.assign( unique.begin() , unique.end());   

}


int main(){
       
       vector <FarmerCrops>  farmers;

       addFarmer( farmers , "ramesh" , {"Wheat" , "Rice" ,"Maize", "wheat"});
       addFarmer( farmers , "sita" , {"wheat" , "cotton"});
   
      displaydata(farmers);
        
vector< vector<string>> croplists = {{"wheat" , "Rice" , "maize"} , {"wheat" , "cotton"}, { "rice" , "barley"}};


 set<string> uniqueCrops = getUniqueCrops(croplists);


   for(auto crop: uniqueCrops){
           cout<<crop<<" ";
   }


   string crop = "wheat";

   vector <string> farmersGrowingCrop = findFarmersByCrop(farmers,crop);

   cout<<endl;

   for( auto it : farmersGrowingCrop){
          
          cout<<it<<" ";
      
   }

     // remove duplicate

       vector <FarmerCrops> farmer = {"sunil",{"wheet" ,"rice" ,"rice","daal"}};
       
       removeduplicate( farmer);


    return 0;
}



