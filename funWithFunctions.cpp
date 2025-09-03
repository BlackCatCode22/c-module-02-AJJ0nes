//funWithFunctions
//Ajones - 9/3/25


#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

//adding function
int add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

//name reversing functions
string reverse(string name) {
    reverse(name.begin(),name.end());
    return name;
}


//main function where program begins
int main() {
    //declare varaibles
    int num1;
    int num2;
    int num3;
    string name;

    //collect varaibles from user
    cout<< "\n Please enter value.";
    cin >> num1;
    cout<< "\n Value for Num1 is: " << num1;

    cout<< "\n Please enter value.";
    cin >> num2;
    cout<< "\n Value for Num2 is: " << num2;

    cout<< "\n Please enter value.";
    cin >> num3;
    cout<< "\n Value for Num3 is: " << num3;

    //call adding function
    int sum = add(num1,num2,num3);
    cout<< "\n The sum is: " << sum;


    //get username
    cout<< "\n Please enter your name.";
    cin >> name;
    cout<< "\n Your name is: " << name;

    //call reversing function
    string rvname = reverse(name);
    cout<< "Reversed name is: " << rvname;
}


