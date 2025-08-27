//reverseStringModule2
//AJones - 8/25/25
//References {
//https://www.youtube.com/watch?v=-5xVrsBguHg&t=783s
//https://github.com/BlackCatCode22/c-module-01-AJJ0nes/blob/main/largestOfThreeAJJ.cpp
// }


#include <windows.h>
#include <shellapi.h>
#include <iostream>//allows use of cin & cout statements
#include <string>// allows use of string statements
#include <algorithm>// allows use of reverse algorithm

using namespace std;

int main() {

 //string Variables
 string input1;
 string input2;
 string combine1;
 string yes;
 int beginindex;
 int endindex;

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
 cout << "\n Do you wish to get an index?" << endl;
 cin >> yes;
    if (yes == "yes") {
     cout << "\n Please enter index number" << endl;
     cin >> indexget;
     cout << "Your Combined Statement is : " << combine1;
     cout << "\n Your index is: " << combine1[indexget] << endl;
    }


//Reverse String
    cout << "\n Do you wish to Reverse your string?" << endl;
    cin >> yes;
    if (yes == "yes") {
        cout << "\n Reversing your statement" << endl;
        ////Reverse function
        reverse(combine1.begin(), combine1.end());
        cout << "Reversed statement is: " << combine1 << std::endl;
    }


//subString index
    cout << "\n Do you wish to Get a Substring?" << endl;
    cin >> yes;
    if (yes == "yes") {
        cout << "\n Please enter a beginning index" << endl;
        cin >> beginindex;
        cout << "\n Please enter a ending index" << endl;
        cin >> endindex;
        cout << "Extracted substring is: " << combine1.substr(beginindex,endindex);
    }


//Get your joke here
    cout << "\n Do you wish to hear a joke?" << endl;
    cin >> yes;
    if (yes == "yes") {
        ShellExecute(nullptr, "open", "https://www.youtube.com/shorts/SXHMnicI6Pg?feature=share", nullptr, nullptr, SW_SHOWNORMAL);
    }

 return 0;
}