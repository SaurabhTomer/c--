#include <iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int left = 0;
    int right = s.length() - 1;

    // Two pointer logic
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    cout << "Reversed string: " << s << endl;

    return 0;
}