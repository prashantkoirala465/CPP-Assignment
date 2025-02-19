#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string startDate, endDate;
    cout << "Enter the start date in the format YYYY-MM-DD: ";
    cin >> startDate;
    cout << "Enter the end date in the format YYYY-MM-DD: ";
    cin >> endDate;
    int startYear = stoi(startDate.substr(0, 4));
    int startMonth = stoi(startDate.substr(5, 2));
    int startDay = stoi(startDate.substr(8, 2));
    int endYear = stoi(endDate.substr(0, 4));
    int endMonth = stoi(endDate.substr(5, 2));
    int endDay = stoi(endDate.substr(8, 2));
    int days = 0;
    while(startYear != endYear || startMonth != endMonth || startDay != endDay){
        days++;
        startDay++;
        if(startDay > daysInMonth[startMonth - 1]){
            startDay = 1;
            startMonth++;
            if(startMonth > 12){
                startMonth = 1;
                startYear++;
            }
        }
    }
    cout << "Days between " << startDate << " to " << endDate << " is: " << days << endl;
    return 0;
}
