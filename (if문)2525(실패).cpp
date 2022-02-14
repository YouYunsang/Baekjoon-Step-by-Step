#include <iostream>
using namespace std;

int main() {
    int hour, minute, time;

    cin >> hour >> minute;

    while (hour < 0 || hour > 23) {
        cin >> hour;
    }

    while (minute < 0 || minute > 59) {
        cin >> minute;
    }

    cin >> time;

    while (time < 0 || time > 1000) {
        cin >> time;
    }

    int Msum = minute + time;

    if (Msum < 60) {
        cout << hour << " " << minute << endl;
    }
    else {
        int Msum1 = Msum / 60;
        int Msum2 = Msum % 60;
        hour = hour + Msum1;
        if (hour > 24) {
            hour = hour - 24;
        }
        else if (hour == 24) {
            hour = 0;
        }
        cout << hour << " " << Msum2 << endl;
    }
    

    return 0;
}
