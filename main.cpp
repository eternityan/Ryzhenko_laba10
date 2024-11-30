#include <iostream>
#include <regex>
#include <string>
using namespace std;
bool isValidString(const string& str) {
    regex pattern("^[A-Za-z0-9]+$");
    return regex_match(str, pattern);
}
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isValidString(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
