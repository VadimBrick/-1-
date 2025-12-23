#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

int main() {
    Date time;       // загальний час
    int addMinutes;  // кількість хвилин що потрібно додати
    
    while (true) {   

        while (true) { 
            cout << "\n=== Time Input ===\n";

            cout << "Enter hours (0-23): ";
            cin >> time.hours;

            cout << "Enter minutes (0-59): ";
            cin >> time.minutes;

            if (time.hours < 0 || time.hours > 23 ||
                time.minutes < 0 || time.minutes > 59)
            {
                cout << "Error! Invalid time. Try again.\n";
                continue; 
            }

            break; 
        }

        cout << "Enter the number of minutes passed: ";
        cin >> addMinutes;
        
        if (addMinutes < 0) {
            cout << "Error! Minutes cannot be negative.\n";
            continue;  
        }

        int totalMinutes = time.hours * 60 + time.minutes + addMinutes;

        int newHours = (totalMinutes / 60) % 24;
        int newMinutes = totalMinutes % 60;
        
        cout << "New time: ";
        if (newHours < 10) cout << "0";
        cout << newHours << ":";

        if (newMinutes < 10) cout << "0";
        cout << newMinutes << "\n";

        break;

    } 

    return 0;
}
