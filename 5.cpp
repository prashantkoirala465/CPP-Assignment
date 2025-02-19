// Write a C++ program to find a word in a given string that has the highest number of repeated letters.
// Example:
// Sample Input: Print a welcome text in a separate line.
// Sample Output: Word which has the highest number of repeated letters. Separate

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word += s[i];
        }
    }
    words.push_back(word);
    int max = 0;
    string maxWord = "";
    for (int i = 0; i < words.size(); i++)
    {
        string temp = words[i];
        sort(temp.begin(), temp.end());
        int count = 1;
        for (int j = 0; j < temp.size(); j++)
        {
            if (temp[j] == temp[j + 1])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            maxWord = words[i];
        }
    }
    cout << maxWord << endl;
    return 0;
}
