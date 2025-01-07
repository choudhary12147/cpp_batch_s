#include<bits/stdc++.h>

using namespace std;


// void gridcell(int i ,int j ,  int n  , int m , string path){
  
//     if (i == n && j == m )
//     {
//         cout<<path<<endl;
//         return;
//     }
    
//     if (i<n)
//     {
//         gridcell(i+1,j,n,m, path+"R");
//     }
//     if (j<m)
//     {
//          gridcell(i,j+1,n,m, path+"B");
//     }
  

// }



void gridcell_include_diagonal(int i , int j , int n , int m, string path){

     if (i == n && j == m)
     {
          return;
     }

     if (i<n)
     {
          gridcell_include_diagonal(i+1,j,n,m,path+"R");
     }
     if (j<m)
     {
          gridcell_include_diagonal(i,j+1,n,m,path+"B");
     }
     
     

}



int main(){

    int m = 2, n = 2;
      
      gridcell_include_diagonal(0,0,n,m,"");
        
        // (0,0) -> (2,2)

    return 0;
}