/*
 file handling ->
 
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){


    //1. write data to file
 
    // ofstream obj;

    // obj.open("created_file.txt");

    // if (obj.is_open())
    // {
    //     cout<<"file is created";
    //     obj<<"file me data store kiya yeha se";
    // }else
    // {
    //     cout<<"file is not created";
    // }
     
    

   //2. read data from the file


    //  ifstream obj;

    //    obj.open("created_file.txt");

    //     string line;

    //    if (obj.is_open())
    //    {

    //     //1. read complete file
    //     //    while (getline(obj,line))
    //     //    {
    //     //           cout<<line<<endl;
    //     //    }
    //     //2. word from file
    //         // obj>>line;
    //         // cout<<line;
    //     //3.read only one line    
    //        getline(obj,line);
    //       cout<<line<<endl;


    //        obj.close();
    //    }else
    //    {
    //     cout<<"error in opening of file";
    //    }
       
       
    //3. read and write to file both


    fstream obj;

    obj.open("created_file.txt",ios::out);  //for write
      
      if (obj.is_open())
      {
              obj<<"first aline through the fstream class"<<endl;
              obj<<"second line through the fstream class";
              cout<<"file is created and data is stored "<<endl;
              obj.close();
      }else
      {
        cout<<"error in opening of the file"<<endl;
      }
      
      obj.open("created_file.txt",ios::in);

        string line;

      if (obj.is_open())
      {
              
               while (getline(obj,line))
               {
                        cout<<line<<endl;
               }
               
          obj.close();
      }else
      {
             cout<<"file is not opend due to error or sytax er";
      }
      
      

      
    return 0;
}
