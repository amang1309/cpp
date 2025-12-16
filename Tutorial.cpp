#include <iostream> 
using namespace std; 
int main() {

cout << "We are dying, not living." << endl;
cout << "I am learning C++." << endl;
cout << 3+3 << "\n";
cout << "3+3" << "\n";
cout << "I logged back into Instagram" << "\n";
cout << "I found many of my friends updated profiles" << endl; 
cout << "I logged back into Instagram" << "\t I found many of my friends there.\n" ; /*one cout and two lines using <<*/ /* (/* is used for multi-line comment)*/ 
//(\t for tab space)

int age=26;
cout << age << "\n" << endl;
cout << "I am " << age << " years old." << endl;
float avg=19.33; double avg2=82.26;
cout << avg + avg2 << endl;

/*int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false*/

int num1=25;
double num2=59.25;
float sum=num1+num2; 
cout << sum; 
cout << "\n";

/* (A variable is a type of identifier — but not all identifiers are variables.
int age;        "age" is an identifier 
int age = 20;   "age" is a variable that stores the number 20) */

const int x=12.23; 
const float number = 25; //(you have to assign a value in the same line) 
cout << number + x << "\n";

/* (const num2;
num2=34; 
cout << num2; // (wrong) ) */ 

 float num=10e34;
 float num5=10e23;
 cout << num/num5;
 cout << "\n";
 
 bool iscodingfun=true; 
 bool isABESgood=false;
 cout << iscodingfun << "\n" << isABESgood << endl; 
 
char num9='a', num8='b', num7='c'; 
cout << num9 << num8 << num7 << "\n"; 
cout << num9; 
cout << num8; 
cout << num7; 
cout << endl; 

//#include <string> 
string greeting="hello"; 
cout << greeting << endl; 

/*auto detects the datatype on its own. So, insted of writing every datatype, you can just replace them with auto.*/
auto x1=5.29;
//you can change x1=6.09, since it is still a floating value. 
auto x2=2; 
auto add= x1+x2; 
cout << add << endl; 

/*int x, y;
  int sum, product, diff; 
  cout << "Type the first number: ";
  cin >> x; 
  cout << "Type the second number: ";
  cin >> y;
  sum=x+y; 
  diff=x-y; 
  product=x*y; 
  double quotient=x/y; 
  cout << sum << endl; 
  cout << diff << endl;
  cout << product << "\n";  
  cout << quotient; 
   okayy! When we have initialised the variables (sum, diff, product, quotient), no need to pre-add data type there. 
  if had not initialised, then would have added. */  // (THIS BUNCH OF LINES SHOWING ERROR ON COMPILER).

 ----------------------------------------------------------------------------------------
 


  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  cout << sum1 << "\n";
  cout << sum2 << "\n";
  cout << sum3 << endl;
  
  int peopleInRoom = 0; 
  peopleInRoom++; 
  peopleInRoom++;
  peopleInRoom++; 
  peopleInRoom--; 
  --peopleInRoom; 
  ++peopleInRoom; 
  cout << peopleInRoom; 
  cout << "\n"; 
  
  int x = 145;
  x+=5; //compsound assignment operator: x+=5 = x=x+5 
  cout << x << endl; 
  int age = 18;
  cout << (age>=18) << endl; 
  /*this is comparision operator. they always produce two values 1 (if condition is right) and 0 (if condition is wrong)*/
  
  cout << "Hello World! \n"; 
  string greetings = "Hello World!"; 
  cout << greetings << endl; 
  string firstName = "Aman" , lastName = "Gurnani" ; 
  cout << firstName + lastName << endl; // you can combine two strings 
  cout << firstName.append(" ").append(lastName) << endl; 
  
  /* + operator is used for concenate strings and add numbers too. so be careful. */
  string txt = "True"; 
  cout << txt.length() << endl; 
  cout << txt.size() << endl; 

--------------------------------------------------------------------------------- 

int age = 25; 
 
 if (age >= 18) {
 cout << "you are eligible to vote" << endl; 
 
 if (age >= 20) {
 cout << "you can have s#x" << endl; }
 } 
  
 int x1 = 56 , x2 = 48; 
 cout << (x1 < x2) << endl; 
 
 int a = 78 , y = 89; 
 if (a > y) {
 cout << "a is greater than b"; }
 else { 
 cout << "a is lesser than b" << endl; }
 

int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
--------------------------------------------------------------

  for (int i = 5; i > 0; i--) {
    cout << i << "\n";
  }
  
   cout << "the Even numbers between 0 to 20, are: " << endl; 
  for (int l = 0; l <= 20; l = l+2) 
  { cout << l << endl;} 
  
  
  int sum = 0;
for (int k = 1; k <= 5; k++) {
  sum = sum + k;
}
cout << "Sum is " << sum << endl; 
  
  
  int m = 10; 
  while (m > 0)
  {cout << m << endl ; 
  m--; } 
  cout << "Happy New Year!!" << endl; 
  
  
  cout << "Sir will be there in"<< endl; 
  for (int n = 10; n >= 1; --n)
   { cout << n << endl; }
   
   int product; 
   for (int t=1; t <= 10; t++)
   {product = 5*t; 
   cout << "5 * " << t << " = "<< product << endl;}
   
   /*int p; 
   for (int t1=1; t1<=10; t1++)
   { for (int t2=10; t2>=1; t2--)
   p = t1 * t2; 
   cout << p << endl; } */


 for (int power = 2; power <=512; power *=2)
    { if (power == 128) 
    { continue ; } 
    
    cout << power << endl; }
    
    int i = 2; 
    while (i<=512)
    { if (i==216)
    { break; } 
    i *= 2; 
    cout << i << endl;} 
    
    int p = 2; 
    while (p<=512)
    { if (p==4)
    { continue; } 
    p *= 2; 
    cout << p << endl;} 

 ---------------------------------------------------------------------------------------

  for (int power = 2; power <=512; power *=2)
    { if (power == 128) 
    { continue ; } 
    
    cout << power << endl; }
    
    int i = 2; 
    while (i<=512)
    { if (i==216)
    { break; } 
    i *= 2; 
    cout << i << endl;} 
    
    int p = 2; 
    while (p<=512)
    { if (p==4)
    { continue; } 
    p *= 2; 
    cout << p << endl;} 

 ----------------------------------------------------------------------------------------------
  #include <iostream> 
using namespace std; 
int main() {
     string name[5] = {"Tanmay "}; 
    /*cout << name[2] << endl; */
    
    /*name[2] = "Priya"; 
    cout << name[2] << endl << endl;*/
    
    /*for (int i = 0;i < 5; i++ ){
        cout << name[i] << endl;
    }*/
    int j = 0; 
    while (j < 5){
        cout << name[j] << endl; 
        j++; //using while loop. 
    }
    cout << endl; 
    
    for (string names : name) {
        cout << names << endl; 
    }     
 //using for-each or range-based loop. here we have to declare another variable (names) 
    cout << endl; 
    
    string subject[] = {"Eng", "Hindi", "Maths", "Science", "SST", "Fine Arts"}; 
    cout << sizeof(subject) << endl;
    cout << sizeof(subject)/sizeof(subject[0]) << endl; 
    
   for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++){
       cout << name[i] << endl; 
   } //loop using sizeof operator. Helpful when we have a large no. of values in an array. witout wasting time in counting, we can use sizeof operator to print the exact cout of all the values in the array. 
   
   string alpha[3][3] = {"A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "I "};
   for (int z = 0; z < 3; z ++){
       for (int y = 0; y < 3; y ++){
           cout << alpha[z][y];
       }
       cout << endl; 
   }

return 0; 
}
    
   
   


#include <iostream>
using namespace std; 

void myFunction() /*Declaration (before { */ { 
    cout << "Hello, I am Aman Gurnani"; 
} /* between both curly braces, comes defination part (what a function is to do.*/

int main () {
    myFunction(); /* calling of the function*/
    
    return 0; 
}


/*#include <iostream> 
using namespace std; 
void add(int a , int b) { 
    int sum = a + b; 
    cout << sum; 
    
} 
int main () { 
    int num1, num2; 
    cout << "enter 1st value : " << endl; 
    cin >> num1; 
    cout << "Enter 2nd Value : " << endl; 
    cin >> num2; 
    add(num1 , num2); 
    return 0; 
    
}*/

#include <iostream> 
using namespace std; 
int myFunction(int x) { 
    return 5 + x; 
    
} 
int main() { 
    cout << myFunction(3); 
    return 0; 
    
}



