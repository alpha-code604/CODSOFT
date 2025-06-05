//building a simple calculator performing numeric operations on two values
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n1, n2, ask, result;
    string choice;

    cout << "Enter first number:-";
    cin >> n1;

    cout << "Enter second number:-";
    cin >> n2;

    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cout << " " << endl;
    cout << "Enter the operation you want to perform(1,2,3,4):-";
    cin >> ask;

    if (ask == 1) {
        result = n1 + n2;
        cout <<"Addition is:-"<< result << endl;
    } else if (ask == 2) {
        result = n1 - n2;
        cout <<"Subtraction is:-"<<result << endl;
    } else if (ask == 3) {
        result = n1 * n2;
        cout << "Multiplication is:-"<<result << endl;
    } else if (ask == 4) {
        if (n2 != 0) {
            result = n1 / n2;
            cout << "Division is:-"<<result << endl;
        } else {
            cout << "Error: Cannot divide by zero." << endl;
        }
    } else {
        cout << "Invalid operation";
    }

    cout << "Do you want to perform another operation(y/n):-";
    cin >> choice;

    if (choice == "y") {
        main();
    } else {
        cout << "Exiting calculator...";
    }

    return 0;
}
