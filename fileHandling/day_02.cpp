#include<bits/stdc++.h>

using namespace std;

// int main(){

    // ofstream obj;

    // obj.open("data.txt");

    // if (obj.is_open())
    // {
    //       obj<<"first line of data is entered"<<endl;
    //        obj<<"second line is written"<<endl;
    //        obj.close();
          
    // }else
    // {
    //     cout<<"file is not open";
    // }


    
    // ifstream obj1;

    //  obj1.open("data.txt");
    
    //  string line;

    // if (obj1.is_open())
    // {
    //      while (getline(obj1,line))
    //      {
    //           cout<<line<<endl;
    //      }
    //      obj1.close();
    // }


    /* write  multiplication of table in file  */
    
    // fstream obj;

    // obj.open("data.txt",ios::out);

    //   int n;
    //    cout<<"enter the number whose table you want to write \n";
    //    cin>>n;

    //     if (obj.is_open())
    //     {
    //         for (int i = 1; i <= 10; i++)
    //         {
    //                obj<<n<<" * "<<i<<" = "<<n*i<<endl;
    //         }
    //         obj.close();
    //     }

        // obj.open("data.txt",ios::in);

        // if (obj.is_open())
        // {
             
        // }
        
        

//     return 0;
// }



// question -> 1.create a file and insert 10 data in it.
//            2. from created file get that data
        //    3. calculate maximun and store the maximum back



  void insertData(vector<int> &arr){
        
         fstream obj;

        obj.open("data.txt",ios::out);
        
        
        if (obj.is_open())
        {    
            
            for(auto it:arr){
                obj<<it<<endl;
            }
            
            obj.close();
        }else
        {
            cout<<"file is not open";
        }
          
      obj.open("data.txt",ios::in);
        
      int ele;
      vector<int> arr1;

      if (obj.is_open())
      {
          while (obj>>ele)
          {
             arr1.push_back(ele);
          }
          
           obj.close();
      }
      
      int max = 0;

      for(auto it:arr1){
          
        if (max<it)
        {
            max = it;
        }
        
      }

    obj.open("datanew.txt",ios::out);
      
       if (obj.is_open())
       {
            obj<<max<<endl;
            obj.close();
       }
       
     
  }


        int main(){  
            
            vector<int> arr;
      
            int ele;

            for (int i = 0; i < 5; i++)
            {
               cin>>ele;
               arr.push_back(ele);
            }

           insertData(arr); 

            return 0;
        }