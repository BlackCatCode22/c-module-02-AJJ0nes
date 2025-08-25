//largestandSumofThree
//AJones 8/25/25

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my largest and Sum of three integers program. \n";

    //create variables
    int num1;
    int num2;
    int num3;
    int sumofinputs;
    string yes;

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


    //compare variables for Largest of Three
    cout<< "\n Do you wish To get Largest Value.";
    cin >> yes;
    if (yes == "yes") {
        if (num1 > num2) {
            if (num1 > num3) {
                cout<< "\n The largest Value is: " << num1;
            }else {
                cout<< "\n The largest Value is: " << num3;
            }
        }else if (num2 > num3) {
            cout<< "\n The largest Value is: " << num2;
        }
        else {
            cout<< "\n The largest Value is: " << num3;
        }
    }

    //SumofInputs
    cout<< "\n Do you wish To get The sum of Values.";
    cin >> yes;
    if (yes == "yes") {
        sumofinputs = num1 + num2 + num3;
        cout << "\n The sum of the three integers is: " << sumofinputs;
    }
    return 0;
}