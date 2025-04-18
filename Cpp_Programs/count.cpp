#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char ch;

    // Read the string and character from the user
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character: ";
    cin >> ch;

    // Count the number of occurrences of the character in the string
    int count = str.count(ch);

    cout << "The character '" << ch << "' appears " << count << " times in the string." << endl;

    return 0;
}
