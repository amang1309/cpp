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





return 0;
}
