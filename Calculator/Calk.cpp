#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string choice;
    cout << "What you want to do? ";
    getline(cin, choice);
    if (choice == "addition") {
        string buffer;
        int first_value, second_value;
        cout << "Enter the first value: ";
        getline(cin, buffer);
        stringstream (buffer) >> first_value;
        cout << "Enter the second value: ";
        getline(cin, buffer);
        stringstream (buffer) >> second_value;
        cout << "Result: " << first_value + second_value << endl;
    }
    else if (choice == "subtraction") {
        string buffer;
        int first_value, second_value;
        cout << "Enter the first value: ";
        getline(cin, buffer);
        stringstream (buffer) >> first_value;
        cout << "Enter the second value: ";
        getline(cin, buffer);
        stringstream (buffer) >> second_value;
        cout << "Result: " << first_value - second_value << endl;
    }
    else if (choice == "multiplication") {
        string buffer;
        int first_value, second_value;
        cout << "Enter the first value: ";
        getline(cin, buffer);
        stringstream (buffer) >> first_value;
        cout << "Enter the second value: ";
        getline(cin, buffer);
        stringstream (buffer) >> second_value;
        cout << "Result: " << first_value * second_value << endl;
    }
    else if (choice == "division"){
        string buffer;
        int first_value, second_value;
        cout << "Enter the first value: ";
        getline(cin, buffer);
        stringstream (buffer) >> first_value;
        cout << "Enter the second value: ";
        getline(cin, buffer);
        stringstream (buffer) >> second_value;
        cout << "Result: " << first_value / second_value << endl;
    }
}