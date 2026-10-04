#include <iostream>
using namespace std;

int main() {
    // Task 1. Country and Capital (using switch)
    cout << "Task 1. Country and Capital" << endl;
    int country;
    cout << "Enter country number (1-5): ";
    cin >> country;
    switch (country) {
    case 1: cout << "Ukraine -> Kyiv" << endl; break;
    case 2: cout << "USA -> Washington" << endl; break;
    case 3: cout << "UK -> London" << endl; break;
    case 4: cout << "France -> Paris" << endl; break;
    case 5: cout << "Japan -> Tokyo" << endl; break;
    default: cout << "Unknown country" << endl;
    }

    // Task 2. Day of the week (using if-else)
    cout << "\nTask 2. Day of the week" << endl;
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    if (day == 6 || day == 7) {
        cout << "It's a weekend!" << endl;
    }
    else if (day >= 1 && day <= 5) {
        cout << "It's a workday." << endl;
    }
    else {
        cout << "Invalid day number." << endl;
    }

    // Task 3. Ship course (using switch)
    cout << "\nTask 3. Ship course" << endl;
    int course;
    cout << "Enter course (1-North, 2-South, 3-West, 4-East): ";
    cin >> course;
    switch (course) {
    case 1: cout << "New course after 'back': South" << endl; break;
    case 2: cout << "New course after 'back': North" << endl; break;
    case 3: cout << "New course after 'back': East" << endl; break;
    case 4: cout << "New course after 'back': West" << endl; break;
    default: cout << "Invalid course" << endl;
    }

    // Task 4. Animal class (using switch with grouped cases)
    cout << "\nTask 4. Animal class" << endl;
    int animal;
    cout << "Enter animal number (1-7): ";
    cin >> animal;
    switch (animal) {
    case 1: case 3: case 5: case 7:
        cout << "Predator" << endl;
        break;
    case 2: case 4: case 6:
        cout << "Herbivore" << endl;
        break;
    default:
        cout << "Unknown animal" << endl;
    }

    return 0;
}