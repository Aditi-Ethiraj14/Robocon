#include <iostream>
#include <string>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    int freq[10] = {0};
    string s = to_string(num);

    for (char c : s) {
        freq[c - '0']++;
    }

    cout << "Digit frequencies:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " -> " << freq[i] << endl;
    }

    return 0;
}
