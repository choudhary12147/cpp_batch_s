#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main(){

    // write to file
 
//       ofstream outFile("stocks.txt");

//        outFile<<" AAPL 150.25 100\n";

//    // read from the file

//      ifstream inFile("stocks.txt");

//          string name;
          
//         float price;

//         int volume;

//          inFile>>name>>price>>volume;

//          cout<<"name "<<name<<"price "<<price<<"volume "<<volume<<endl;
         


// seekg , seelp

//   ofstream file("two.txt");

//     file.seekp(8);    // for write
     
//     file<<9<<endl;

//    file.close();
   
//     int getdata;
     
//     ifstream file1("one.txt");


      
//        file1.seekg(12)>>getdata;
//         cout<<getdata;
//        file1.close();


//    ofstream file("stocks.txt",ios::app);
    
//    file<<"sunil 678.0 700"<<endl;
//    file<<"mohit 567.0 600"<<endl;
//    file.close();


   // delete from the file

//    ifstream file("stocks.txt");

//   vector<string> data;
    
//              string line;
    
//            while (getline(file,line))
//            {
//                  if (line.find("sunil") == string::npos)  // skip the line containing "sunil"
//                  {
//                       data.push_back(line);          
//                  }
                 
//            }
//           file.close(); 
   
//      ofstream file1("stocks.txt");
   
//      for(auto it:data){
//          file1<<it<<" ";
//      }
   
//       file.close();


//7. data stucture and files

struct Stock
{
    string symbol;
    double price;
    int volume;
};

// Stock s = {"newc",678.00,800};

// write to file after serialization

//  ofstream outfile ("stocks.dat",ios::binary);
 
//      outfile.write((char*)&s , sizeof(s));
  
//      ifstream infile ("stocks.dat",ios::binary);
  
//        infile.close();

//      Stock s2;

//      infile.read((char*)&s2,sizeof(s2));

//      cout<<"symbol ->"<<s2.symbol<<" price ->"<<s2.price<<" volume ->"<<s2.volume<<endl; 

//      infile.close();


// 8.random access to file

 
Stock s1 = {"new",567.90,200};

fstream file("stocks.dat",ios::in|ios::out|ios::binary);
  
file.seekp(2*sizeof(Stock));

file.write((char*)&s1,sizeof(s1));

file.close();

Stock s2 ;
  
  file.seekg(sizeof(Stock));

   file.read((char*)&s2,sizeof(s2));

    cout<<s2.symbol<<" "<<s2.price<<"  "<<s2.volume<<endl;

    return 0;
}