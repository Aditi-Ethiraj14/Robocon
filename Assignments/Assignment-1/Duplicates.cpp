#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    set<int> s;
    bool hasDuplicate = false;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) {
            hasDuplicate = true;
            break;
        }
        s.insert(arr[i]);
    }

    if (hasDuplicate)
        cout << "Array contains duplicate values\n";
    else
        cout << "Array has all unique values\n";

    return 0;
}
