#include <iostream>
using namespace std;

class Robot {
private:
    string name;
    int batteryLevel;

public:
    // Default constructor
    Robot() {
        name = "Alpha";
        batteryLevel = 100;
        cout << "Robot " << name << " created with battery " << batteryLevel << "%\n";
    }

    // Member function to perform a task
    void performTask() {
        if (batteryLevel >= 10) {
            batteryLevel -= 10;
            cout << name << " performed a task. Battery now: " << batteryLevel << "%\n";
        } else {
            cout << name << " does not have enough battery to perform a task.\n";
        }
    }

    // Member function to display robot status
    void displayStatus() {
        cout << "Robot Name: " << name << ", Battery Level: " << batteryLevel << "%\n";
    }

    // Destructor
    ~Robot() {
        cout << "Robot " << name << " is shutting down. Goodbye!\n";
    }
};

int main() {
    Robot r;              // Constructor call
    r.displayStatus();    // Initial status

    r.performTask();      // Reduce battery
    r.performTask();      // Perform another task
    r.displayStatus();    // Show updated status

    // Destructor call when 'r' out of scope
    return 0;
}
