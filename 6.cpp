// Write a C++ program to convert a given non-negative integer into English words.
// Example:
// Sample Input: 12
// Sample Output: Twelve
// Sample Input: 29
// Sample Output: Twenty Nine

#include <iostream>
#include <string>
using namespace std;


string convertToWords(int n) {
    string ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                      "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    string tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    if (n == 0)
        return "Zero";

    string result = "";

    if (n >= 10 && n <= 19) {
        result = ones[n];
    }
    else {
        if (n >= 20) {
            result += tens[n / 10];
            n %= 10;
            if (n > 0)
                result += " " + ones[n];
        } else if (n > 0) {
            result += ones[n];
        }
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative integer!" << endl;
    } else {
        cout << "The number in English is: " << convertToWords(num) << endl;
    }

    return 0;
}
