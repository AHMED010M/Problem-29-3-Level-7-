#include <iostream>
#include <string>
using namespace std;

string ReadName() {
    string Ch1;
    cout << "Please Enter a String?\n";
    getline(cin, Ch1);
    return Ch1;
}

bool IsUpperLetterCase(char char1) {
    return isupper(char1);
}

bool IsLowerLetterCase(char char1) {
    return islower(char1);
}

int CounterCapitalLetter(string name) {
    int Capital = 0;

    for (int i = 0; i < name.length(); i++) {
        if (IsUpperLetterCase(name[i]))
            Capital++;
    }
    return Capital;
}

int CounterSmallLetter(string name) {
    int small = 0;
    for (int i = 0; i < name.length(); i++) {
        if (IsLowerLetterCase(name[i]))
            small++;
    }
    return small;
}

int main() {
    string name = ReadName();
    cout << "\n\nString Length = " << name.length() << endl;
    cout << "Capital Letter count = " << CounterCapitalLetter(name) << endl;
    cout << "Small Letter count = " << CounterSmallLetter(name) << endl;
}
