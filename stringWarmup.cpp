//stringWarmup
//AJones - 8/25/25
//References {
//https://www.youtube.com/watch?v=-5xVrsBguHg&t=783s
//https://github.com/BlackCatCode22/c-module-01-AJJ0nes/blob/main/largestOfThreeAJJ.cpp
// }



#include <iostream>//allows use of cin & cout statements
#include <string>// allows use of string statements
#include <algorithm>

using namespace std;

int main() {

 //string Variables
 string input1;
 string input2;
 string combine1;

 //Index Integer Variable
 int indexget;

//Program welcome statement
 cout << "\n Welcome to my String Warmup" << endl;

 //statement1
 cout << "\n Please enter a statement" << endl;
 cin >> input1;
 cout << "\n Your Statement: " << input1;
 cout << "\n Index Size: " << input1.size() -1 << endl;

 //statement 2
 cout << "\n Please enter a statement" << endl;
 cin >> input2;
 cout << "\n Your Statement: " << input1;
 cout << "\n Index Size: " << input1.size() -1 << endl;

 //Statement Combination
 combine1 = input1 + input2;
 cout << "\n Your Combined Statement Is: " << combine1;
 cout << "\n Index Size: " << combine1.size() - 1 << endl;

 //Get index number
 cout << "\n Please enter index number" << endl;
 cin >> indexget;
 cout << "Your Combined Statement is : " << combine1;
 cout << "\n Your index is: " << combine1[indexget] << endl;

//Reverse String
std::reverse(combine1.begin(), combine1.end());

 return 0;
}