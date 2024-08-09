#include<bits/stdc++.h>

using namespace std;

// Q1.

int evenodd(int n){
     
     if(n % 2 == 0){
        
        return 1;
     }else
     {
        return 0;
     }
     
     

}

int main(){
  
  int num ;

  cout<<"enter the value of n number :\n";
  cin>>num;

      if (evenodd(num) == 1)
      {
        cout<<"even";
      }
      else
      {
        cout<<"odd";
      }

    return 0;
}


// Q 2.



char perc(int p){

    if (p < 40)
    {
        return 'c';
    }
    else if (p >= 40 && p < 60 )
    {
        return 'b';
    }
    else
    {
        return 'a';

        cout<<p;
    }

}
int main(){

     
     int percentage;
     cout<<"enter the percentage\n";
     cin>>percentage;
    cout<<perc(percentage);


    return 0;
}




//Q 3.



void isleepyear( int year ){
       
      if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
      {
        cout<<"leep year ";
      }
      else
      {
        cout<<"not a leep year ";
      }
      
       

}

int main(){

  int year;

  cout<<"enter the year ";
  cin>>year;

  isleepyear( year );

    return 0;
}



// Q. 4 




void whichTringle( int a , int b , int c){
          
          if ( a < 90 && b < 90 && c < 90 )
          {
              cout<<"Acute Tringle\n";

          }else if ( a > 90 || b > 90 || c > 90)
          {
             cout<<"obtuse Tringle\n";
          }else if ( a== 90 || b == 90 || c == 90)  
          {
            cout<<"Right Angle Triangle\n";
          }          
          
}


int main(){
  
  int a , b , c;
  
  cout<<"enter the values \n";
  cin>>a;
  cin>>b;
  cin>>c;
  
  whichTringle(a,b,c);

    return 0;
}




// Q. 5



void greaternumber(int a , int b , int c){
       
      if (a > b)
      {
         if (a > c)
         {
             cout<<"a";
         }
         
      }
      else if ( b > c )
      {
               if (b > a)
               {
                  cout<<"b";
               }
                  
      }else if (c > a)
      {
         if (c > b )
         {
            cout<<"c";
         }
         
      }
      
      

}



int main(){
     
    int  a,b,c;

    cout<<"enter the value \n";
    cin>>a;
    cin>>b;
    cin>>c;
     
     greaternumber(a,b,c);

    return 0;
}




// Q 6




string checkvowels( char vowels ){

     if (vowels == 'a' || vowels == 'e' || vowels == 'i' || vowels == 'o' || vowels == 'u')
     {
       return "vowels";  
     }else
     {
       return " notvowels";
     }
     


     
}

int main(){
    
    char vowels;
    cout<<"enter the char \n";
    cin>>vowels;

    cout<<checkvowels(vowels);

   return 0;
}





// Q 7




bool ispalindrome( string str ){
  
     int ln = str.length();

     for (int i = 0; i < ln/2 ; i++)
     {
        if (str[i] != str[ln - i -1])
        {
          return false;
        }else
        {
         return true ;
        }                
     }
     


}

int main(){
    
    string str;

    cout<<"write a string";

    cin>>str;

   if (ispalindrome(str))
   {
      cout<<"word is palindrome";
   }
   else
   {
      cout<<"word is not a palindrome";
   }
   

   return 0;
}



// Q .8 



string stageofperson (int age ){

     if ( age <= 10 )
     {
        return "child";

     }else if ( age > 10 &&  age < 18   )
     {
      return " teenager ";

     }else if ( age >= 18 && age < 30 )
     {
       return "adult ";
     }else
     {
        return "senior";
     }

}

int main(){

    int age ;
    cout<<"enter the value of age : \n";
    cin>>age;

   cout<<stageofperson(age)<<" \n ";

   return 0;
}





// Q.9


string categorizeCharacter( char ch){
    
    if (ch >= 'A' && ch <= 'Z' )
    {
       return "upperCase";
    }
    else if ( ch >= 'a' && ch <= 'z')
    {
        return "lowerCase";
    }
    else if( ch >= '0' && ch <= '9' )
    {
       return "Digit";
    }else
    {
      return "special character";
    }
    

}



int main(){
      
      char ch;
   
   cout<<" enter  the value of character \n";
   cin>>ch;

   cout<<categorizeCharacter(ch);

   return 0;
}




// Q.10




 int  salary(int n ){

    if ( n >= 100000)
    {
         return n -  ( n*2/10);
    }
    else if ( n > 50000 && n < 100000)
    {
       return n - (n*1/10);
    }
    else
    {
       return n -  (n * 5 /100 );
    }
}

int main(){
   
   int n;
   cout<<" enter the salary amount";
   cin>>n;

    cout<<"salary after tax"<<salary(n);

   return 0;
}




// Q 11.




bool isPowerOfTwo(int num) {
    if (num <= 0) {
        return false;
    }
    
    while (num > 1) {
        if (num % 2 != 0) {
            return false;
        }
        num /= 2;
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}





// Q.12



string result (int score){
        
        if (score >= 50)
        {
         return "passed";
        }
        
        else
        {
         return "failed";
        }
        

}


int main(){
   int score;
   cout<<"enter the score";
   cin>>score;

    cout<<result(score);

   return 0;
}




// Q.13




bool divisible (int num ){
          
          if ( num % 3 == 0 && num % 5 == 0 )
          {
              return 1;
          }else
          {
                return false;
          }
          
}

int main(){
       
       int num ;

       cin>>num;

//      divisible(num);

     if (divisible(num))
     {
        cout<<"number is divisible by 3 and 5 ";
     }else
     {
        cout<<"number is not divisible by 3 and 5";
     }
     
        return 0;
}




// Q.14



int prize(int num ){
       
       if ( num > 5 && num < 10 )
       {
          return num = num - (num *1/10);
       }else if (num > 10)
       {
          return num = num - (num*2/10);
       }
       
       
}

int main(){
        
        int num;
        cin>>num;
        cout<<prize(num);
        return 0;        
}





// Q.15





string grade(int credit_score){
         
         if (credit_score <= 33 )
         {
                return " poor ";
         }
         else if (credit_score > 33 && credit_score < 60 )
         {
                return "fair";
         }
         else if ( credit_score > 60 && credit_score < 80)
         {
                 return " good ";
         }else
         {
                return "excellent";
         }
         
}


int main(){
        int credit_score;
         
         cout<<grade(credit_score);

        return 0;
}



//Q.16





bool isEligibleForScholarship(double grade1, double grade2, double grade3) {
    double average = (grade1 + grade2 + grade3) / 3.0;

    
    if (average >= 85.0) {
        if (grade1 >= 70.0 && grade2 >= 70.0 && grade3 >= 70.0) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

int main() {
    double grade1, grade2, grade3;

    cout << "Enter the grades for the three subjects: ";
    cin >> grade1 >> grade2 >> grade3;

    if (isEligibleForScholarship(grade1, grade2, grade3)) {
        cout << "The student is eligible for a scholarship." << endl;
    } else {
        cout << "The student is not eligible for a scholarship." << endl;
    }

    return 0;
}



// Q.17



string checkDayType(const string& day) {
    
    string lowerDay = day;
    for (char &c : lowerDay) {
        c = tolower(c);
    }

    if (lowerDay == "monday" || lowerDay == "tuesday" || lowerDay == "wednesday" ||
        lowerDay == "thursday" || lowerDay == "friday") {
        return "Weekday";
    } else if (lowerDay == "saturday" || lowerDay == "sunday") {
        return "Weekend";
    } else {
        return "Invalid day";
    }
}

int main() {
    string day;
    
    cout << "Enter a day of the week: ";
    cin >> day;

    string result = checkDayType(day);
    
    if (result == "Invalid day") {
        cout << "The input is not a valid day of the week." << endl;
    } else {
        cout << day << " is a " << result << "." << endl;
    }

    return 0;
}