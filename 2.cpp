// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    bool isValidDate(int d, int m, int y) {
        if (y < 1 || m < 1 || m > 12 || d < 1) return false;
        int daysInMonth;
        switch(m) {
            case 2:
                daysInMonth = ( (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0) ) ? 29 : 28;
                break;
            case 4: case 6: case 9: case 11:
                daysInMonth = 30;
                break;
            default:
                daysInMonth = 31;
                break;
        }
        if (d > daysInMonth) return false;
        return true;
    }

public:
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid Date" << endl;
        }
    }

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    bool validate() {
        return isValidDate(day, month, year);
    }
};

int main() {
    Date dt;
    dt.setDate(29, 2, 2020);
    if(dt.validate()) {
        cout << "Valid date: "
             << dt.getDay() << "/" << dt.getMonth() << "/" << dt.getYear() << endl;
    } else {
        cout << "Invalid date" << endl;
    }

    return 0;
}
