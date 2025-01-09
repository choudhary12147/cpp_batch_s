#include<bits/stdc++.h>

using namespace std;


//  rat in a maze

// void gridcell(  vector<vector<int>> grid, int i , int j , int m , int n , string path){

   
//    if (i == m && j == n )
//    {
//     cout<<path<<endl;
//       return;
//    }


//    if ( i<m || j >n || grid[i][j] == 0 )
//    {
//       return;
//    }

   
//    if(i>m){
//          gridcell(grid,i-1,j,m,n,path+"U");
//    }
//    if(j<n){
         
//           gridcell(grid,i,j+1,m,n,path+"R");
//    }
     
       
   
// }


//  void  gridcell( vector<vector<int>> grid, int i, int j, int m, int n , string path){


//         if (i == m && j == n )
//         {
//             cout<<path;
//              return;
//         }

//         // (2,1 ) -> (0,2)

//         if (i < m || j > n || grid[i][j] == 0 )
//         {
//           return;
//         }

//       gridcell(grid,i-1,j,m,n,path+"U");
  
//       gridcell(grid,i,j+1,m,n,path+"R");

//       gridcell(grid,i-1,j+1,m,m,path+"D");
       

//  }




// int main(){


//     vector <vector<int>> grid = {
//           {1,0,1},
//           {1,0,1},
//           {1,1,1}
//     };
   
//    int m =0,n = 2;

//     gridcell(grid,2,1,m,n,"");

//     return 0;
// }


// diagonal move with obestacles 
//  1 1 1
//  1 1 0
//  1 1 0



