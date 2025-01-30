#include<bits/stdc++.h>

using namespace std;

// files



// int main(){

//     // ifstream obj;

//     // obj.open("file.txt");

//     // string str;

//     // if (obj.is_open())
//     // {
           
//     //        while (getline(obj,str))
//     //        {
//     //              cout<<str<<"\n";
//     //        }

//     // }
//     // else
//     // {
//     //     cout<<"file open nhi ho rhi h";
//     // }
    
//     return 0;
// }


// read and write together


int main(){

    fstream obj;

    obj.open("file.txt",ios::out);

    if (obj.is_open())
    {
         obj<<"sikar me reengus ka h";
         obj.close(); 
    }else
    {
        cout<<"file open nahi ho rhi h";
    }
    
    obj.open("file.txt",ios::in);

  string str;

   if (obj.is_open())
   {
        while ( getline(obj,str))
        {
              cout<<str<<"\n";
        }
               

   }
   else
   {
         cout<<"file open nhi ho rhi h";
   }
       

    return 0;
}