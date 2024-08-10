#include<iostream>
#include<math.h>

using namespace std;


// Q.1

bool prime_no(int n){
           
              if (n <= 1)
              {
                return false;
              }
              


           for (int i = 2;  i*i <= n; i++)
           {
             if ( n%i == 0 )
             {
                return false;
             }
               
           }

           return true;
           
}



int main(){
       
        int n;

        cout<<"enter the number ";

        cin>>n;

       if (prime_no(n))
       {
         cout<<"prime number";
       }
       else
       {
         cout<<"not a prime number";
       }
       

    return 0;
}



// Q.2


string categorizeTemp(double celsius){
     
     if (celsius < 10)
     {
        return "cold";
     }
     else if (celsius >= 10.0 && celsius <= 25.0)
     {
       return "warm";
     }
     else
     {
        return "Hot";
     }
     
}


int main(){
  double temp;
  cout<<"Enter the temperature in celsius: ";
  cin>>temp;

  cout<<categorizeTemp(temp)<<endl;

}




// Q.3





string daysInMonth(string month) {
    if (month == "January" || month == "March" || month == "May" || 
        month == "July" || month == "August" || month == "October" || 
        month == "December") {
        return "31 days";
    } else if (month == "April" || month == "June" || 
               month == "September" || month == "November") {
        return "30 days";
    } else if (month == "February") {
        return "28/29 days";
    } else {
        return "Invalid month";
    }
}

int main() {
    string month;
    cout << "Enter the month: ";
    cin >> month;

    string days = daysInMonth(month);
    cout << month << " has " << days << "." << endl;

    return 0;
}





// Q.4





string classifyTriangle(double side1, double side2, double side3) {
    if (side1 == side2 && side2 == side3) {
        return "Equilateral";
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}

int main() {
    double a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b>>c;


}




//Q.5





void checkNumber(float num) {
    if (num > 0) {
        cout << num << " is positive." << endl;
    } else if (num < 0) {
        cout << num << " is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}

int main() {
    float number;
    cout << "Enter a floating-point number: ";
    cin >> number;

    checkNumber(number);

    return 0;
}



//Q.6





void compareNumbers(int num1, int num2) {
    if (num1 == num2) {
        cout << "The numbers are equal." << endl;
    } else if (num1 > num2) {
        cout << num1 << " is larger than " << num2 << "." << endl;
    } else {
        cout << num2 << " is larger than " << num1 << "." << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    compareNumbers(a, b);

    return 0;
}



// Q.7



void checkUppercase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    } else {
        cout << ch << " is not an uppercase letter." << endl;
    }
}

int main() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;

    checkUppercase(inputChar);

    return 0;
}





//Q.8





void checkBMICategory(float weight, float height) {
    // Calculate BMI
    float bmi = weight / (height * height);

    

    // Determine BMI category
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi >= 25.0 && bmi < 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obese" << endl;
    }
}

int main() {
    float weight, height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    checkBMICategory(weight, height);

    return 0;
}






//Q.9






bool containsOnlyDigits(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    if (containsOnlyDigits(inputString)) {
        cout << "The string contains only digits." << endl;
    } else {
        cout << "The string does not contain only digits." << endl;
    }

    return 0;
}







// Q.10





double calculateTotalPay(double hourlyWage, double hoursWorked) {
    double totalPay;

    if (hoursWorked <= 40) {
        // No overtime
        totalPay = hourlyWage * hoursWorked;
    } else {
        // Calculate regular pay for 40 hours
        double regularPay = hourlyWage * 40;
        // Calculate overtime pay (1.5 times hourly wage for hours over 40)
        double overtimePay = (hoursWorked - 40) * (hourlyWage * 1.5);
        // Total pay is regular pay + overtime pay
        totalPay = regularPay + overtimePay;
    }

    return totalPay;
}

int main() {
    double hourlyWage, hoursWorked;

    cout << "Enter your hourly wage: ";
    cin >> hourlyWage;
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    double totalPay = calculateTotalPay(hourlyWage, hoursWorked);
    cout << "Your total pay is: $" << totalPay << endl;

    return 0;
}







//Q.11






void categorizeCharacter(char ch) {
    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    } else {
        cout << ch << " is a special character." << endl;
    }
}

int main() {
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;

    categorizeCharacter(inputChar);

    return 0;
}





//Q.12






void determineTaxBracket(double income) {
    if (income <= 9950) {
        cout << "Tax Bracket: 10%" << endl;
    } else if (income <= 40525) {
        cout << "Tax Bracket: 12%" << endl;
    } else if (income <= 86375) {
        cout << "Tax Bracket: 22%" << endl;
    } else if (income <= 164925) {
        cout << "Tax Bracket: 24%" << endl;
    } else if (income <= 209425) {
        cout << "Tax Bracket: 32%" << endl;
    } else if (income <= 523600) {
        cout << "Tax Bracket: 35%" << endl;
    } else {
        cout << "Tax Bracket: 37%" << endl;
    }
}

int main() {
    double income;
    cout << "Enter your income: ";
    cin >> income;

    determineTaxBracket(income);

    return 0;
}






//Q.13




void determineTaxBracket(double income) {
    if (income <= 9950) {
        cout << "Tax Bracket: 10%" << endl;
    } else if (income <= 40525) {
        cout << "Tax Bracket: 12%" << endl;
    } else if (income <= 86375) {
        cout << "Tax Bracket: 22%" << endl;
    } else if (income <= 164925) {
        cout << "Tax Bracket: 24%" << endl;
    } else if (income <= 209425) {
        cout << "Tax Bracket: 32%" << endl;
    } else if (income <= 523600) {
        cout << "Tax Bracket: 35%" << endl;
    } else {
        cout << "Tax Bracket: 37%" << endl;
    }
}

int main() {
    double income;
    cout << "Enter your income: ";
    cin >> income;

    determineTaxBracket(income);

    return 0;
}





//Q.14





bool isPerfectSquare(int num) {
    int s = sqrt(num);
    return (s * s == num);
}


bool isFibonacci(int n) {
    if (n < 0) {
        return false; 
    }

   
    int x1 = 5 * n * n + 4;
    int x2 = 5 * n * n - 4;

    if (isPerfectSquare(x1) || isPerfectSquare(x2)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isFibonacci(number)) {
        cout << number << " is a Fibonacci number." << endl;
    } else {
        cout << number << " is not a Fibonacci number." << endl;
    }

    return 0;
}




//Q.15




bool isPerfectSquare(int num) {
    if (num < 0) {
        return false; // Negative numbers cannot be perfect squares
    }

    int sqrtNum = sqrt(num); // Calculate the square root of the number
    return (sqrtNum * sqrtNum == num); // Check if the square of sqrtNum equals the original number
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPerfectSquare(number)) {
        cout << number << " is a perfect square." << endl;
    } else {
        cout << number << " is not a perfect square." << endl;
    }

    return 0;
}





//Q.16





double fahrenheitToCelsius(double fahrenheit) {
    // Convert Fahrenheit to Celsius
    double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    // Additional messages based on temperature
    if (celsius <= 0.0) {
        cout << "It's freezing!" << endl;
    } else if (celsius >= 100.0) {
        cout << "Water is boiling!" << endl;
    }

    return celsius;
}

int main() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = fahrenheitToCelsius(fahrenheit);
    cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius." << endl;

    return 0;
}




//Q.17





string determineZodiacSign(int day) {
    string zodiacSign;

    if ((day >= 21 && day <= 31) || (day >= 1 && day <= 19)) {
        zodiacSign = "Capricorn";
    } else if (day >= 20 && day <= 31) {
        zodiacSign = "Aquarius";
    } else if (day >= 19 && day <= 29) {
        zodiacSign = "Pisces";
    } else if (day >= 21 && day <= 31) {
        zodiacSign = "Aries";
    } else if (day >= 20 && day <= 30) {
        zodiacSign = "Taurus";
    } else if (day >= 21 && day <= 31) {
        zodiacSign = "Gemini";
    } else if (day >= 21 && day <= 30) {
        zodiacSign = "Cancer";
    } else if (day >= 23 && day <= 31) {
        zodiacSign = "Leo";
    } else if (day >= 23 && day <= 31) {
        zodiacSign = "Virgo";
    } else if (day >= 23 && day <= 30) {
        zodiacSign = "Libra";
    } else if (day >= 24 && day <= 31) {
        zodiacSign = "Scorpio";
    } else if (day >= 22 && day <= 30) {
        zodiacSign = "Sagittarius";
    } else {
        zodiacSign = "Invalid day of the month";
    }

    return zodiacSign;
}

int main() {
    int day;
    cout << "Enter the day of the month (1-31): ";
    cin >> day;

    string sign = determineZodiacSign(day);
    cout << "Zodiac sign for day " << day << " is: " << sign << endl;

    return 0;
}





//Q.18






double determineBonusPercentage(int yearsOfService) {
    double bonusPercentage;

    if (yearsOfService < 1) {
        bonusPercentage = 0.0;
    } else if (yearsOfService >= 1 && yearsOfService < 3) {
        bonusPercentage = 5.0;
    } else if (yearsOfService >= 3 && yearsOfService < 5) {
        bonusPercentage = 10.0;
    } else if (yearsOfService >= 5 && yearsOfService < 10) {
        bonusPercentage = 15.0;
    } else if (yearsOfService >= 10) {
        bonusPercentage = 20.0;
    } else {
        // This should not be reached; included for completeness
        bonusPercentage = 0.0;
    }

    return bonusPercentage;
}

int main() {
    int years;
    cout << "Enter the number of years of service: ";
    cin >> years;

    double bonus = determineBonusPercentage(years);
    cout << "The bonus percentage for " << years << " years of service is: " << bonus << "%" << endl;

    return 0;
}



//Q.19




string determineLifeStage(int age) {
    string lifeStage;

    if (age >= 0 && age <= 1) {
        lifeStage = "Infant";
    } else if (age >= 2 && age <= 4) {
        lifeStage = "Toddler";
    } else if (age >= 5 && age <= 12) {
        lifeStage = "Child";
    } else if (age >= 13 && age <= 17) {
        lifeStage = "Adolescent";
    } else if (age >= 18 && age <= 64) {
        lifeStage = "Adult";
    } else if (age >= 65) {
        lifeStage = "Senior";
    } else {
        lifeStage = "Invalid age";
    }

    return lifeStage;
}

int main() {
    int age;
    cout << "Enter the age: ";
    cin >> age;

    string stage = determineLifeStage(age);
    cout << "The life stage for age " << age << " is: " << stage << endl;

    return 0;
}
