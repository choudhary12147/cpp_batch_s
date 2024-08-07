#include<iostream>

using namespace std;


// Q1


void D(){
    cout<<"D is called \n";
    cout<<"D is ended  \n";
}



void C(){
    cout<<"C is called \n ";
    D();
    cout<<"c is ended \n";
}



void B(){
     cout<<"B is called \n";
     C();
       cout<<"B is ended \n";

}



void A(){
   
   cout<<"A is called \n";
    B();
    cout<<"A is ended \n";

}


int main(){
A();
    return 0;
}



// Q 2


void E(){
    cout<<"E is called \n";
    cout<<"E is called \n";
}

void F(){
    cout<<"F is called \n";
    cout<<"F is ended \n";
}




void B(){
     cout<<"B is called \n";
     E();
     F();
     cout<<"B is ended \n";


}

void G(){
   
   cout<<" G is called ";
   cout<<" G is ended ";

}

void H(){
    cout<<" H is called ";
    cout<<" H is ended ";
}


void I(){
    cout<<"I is  called ";
    cout<<"I is ended ";
}

void J(){
    cout<<"J is called ";
    cout<<"J is ended  "; 
}



void D(){
  
  cout<<" D is called ";
  I();
  J();
  cout<<"D is ended ";

}





void C(){
    cout<<" C is called";
    G();
    H();
    cout<<" C is ended ";
}







void A(){
    cout<<"A is called \n";
      B();
     
      C();
    
      D();

      cout<<"A is ended \n";
      
}






int main(){
     
     cout<<"A is called \n";
     A();
     cout<<"A is ended \n";
       
    return 0;
}





// Q 3


void I(){
    cout<<"I is called \n";
    cout<<"I is ended \n ";
}



void H(){
    cout<<"H is called \n";
    cout<<"H is ended \n ";
}

void G(){
    cout<<"G is called\n";
    cout<<"G is ended \n";
}



 void F(){
    cout<<"F is called \n";
    G();
    H();
    I();
    cout<<"F is ended \n ";
 }


 void C(){
    cout<<"C is called \n ";
    cout<<"C is ended \n ";
 }

void D(){
    cout<<"D is called \n";
    F();
    cout<<"D is ended \n";
}
void E(){
    cout<<"E is called \n";
    cout<<"E is ended \n";
}




void B(){
    cout<<"B is called \n";
    C();
    D();
    E();
    cout<<"B is ended \n";
}

void A(){
    cout<<"A is called \n";
    B();
    cout<<"A is ended \n";
}



int main(){

    A();

    return 0;
}




//  Q 4


void I(){
    cout<<"I is called \n";
    cout<<"I is ended \n";
}


void F(){
    cout<<"F is called \n";
    cout<<"F is ended \n";
}
void G(){
    cout<<"G is called \n";
    I();
    cout<<"G is ended \n";
}

void H(){
    cout<<"H is called \n";
    cout<<"H is ended \n";
}

void E(){
    cout<<"E is called \n";
    F();
    G();
    H();
    cout<<"E is ended \n";
}




void B(){
    cout<<"B is called \n";
   cout<<"B is ended\n";
}
void C(){
    cout<<"C is called \n";
     E();
    cout<<"C is ended \n";
}
void D(){
    cout<<"D is called \n";
    cout<<"D is ended \n ";
}

void A(){
    cout<<"A is  called \n";
    B();
    C();
    D();
    cout<<"A is ended \n";

}



int main(){
   A();

    return 0;
}




// Q. 5


void H(){
    cout<<"H is called \n";
    cout<<"H is ended \n ";
}



void G(){
    cout<<"G is called \n";
    H();
    cout<<"G is ended \n";
}


void E(){
    cout<<"E is called \n";
    H();
    cout<<"E is ended \n ";
}



void D(){
    cout<<"D is called \n";
    E();
    cout<<"D is ended \n ";
}

void F(){
    cout<<"F is called \n";
    G();
    cout<<"F is ended \n";
}

void B(){
    cout<<"B is called \n";
    F();
    cout<<"B is ended \n";
}

void C(){
    cout<<"C is called \n";
    D();
    cout<<"C is ended \n";
}


void A(){
  
  cout<<"A is called \n";

    B();
    C();

    cout<<"A is ended \n";
}





int main(){

  A();

    return 0;
}


















