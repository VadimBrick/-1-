#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
};

int main() {
    Time start, end;

    
    while (true) {
        cout << "Enter start hours (0-23): ";
        cin >> start.hours;
        cout << "Enter start minutes (0-59): ";
        cin >> start.minutes;

        if (start.hours < 0 || start.hours > 23 || start.minutes < 0 || start.minutes > 59) {
            cout << "Error! Invalid start time. Try again.\n";
            continue;
        }
        break;
    }

   
    while (true) {
        cout << "Enter end hours (0-23): ";
        cin >> end.hours;
        cout << "Enter end minutes (0-59): ";
        cin >> end.minutes;

        if (end.hours < 0 || end.hours > 23 || end.minutes < 0 || end.minutes > 59) {
            cout << "Error! Invalid end time. Try again.\n";
            continue;
        }
        break;
    }

   
    int startTotalMinutes = start.hours * 60 + start.minutes;
    int endTotalMinutes = end.hours * 60 + end.minutes;

   
    int durationMinutes;
    if (endTotalMinutes >= startTotalMinutes) {
        durationMinutes = endTotalMinutes - startTotalMinutes;
    } else {
       
        durationMinutes = (24 * 60 - startTotalMinutes) + endTotalMinutes;
    }

    int durationHours = durationMinutes / 60;
    int durationRemainderMinutes = durationMinutes % 60;

   
    cout << "Duration: ";
    if (durationHours < 10) cout << "0";
    cout << durationHours << ":";
    if (durationRemainderMinutes < 10) cout << "0";
    cout << durationRemainderMinutes << endl;

    return 0;
}
