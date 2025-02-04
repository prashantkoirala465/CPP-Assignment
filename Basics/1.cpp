#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    cout << "Enter your first name and last name : ";
    cin >> firstName >> lastName;
    cout << "First Name : " << firstName << endl;
    cout << "Last Name : " << lastName << endl;
    cout << "Name in reverse is: " << lastName << " " << firstName << endl;
    return 0;
}
