// Lab8_control_1(class_time).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int hour, int minute, int second) {
        hours = hour;
        minutes = minute;
        seconds = second;

        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds -= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes -= 60;
        }
    }

    void show() const {
        if (hours < 10) {
            cout << "0";
        }
        cout << hours << ":";
        if (minutes < 10) {
            cout << "0";
        }
        cout << minutes << ":";
        if (seconds < 10) {
            cout << "0";
        }
        cout << seconds << endl;
    }

    int get_total_seconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time sum(const Time& other) const {
        int total_sec1 = get_total_seconds();
        int total_sec2 = other.get_total_seconds();
        int total = total_sec1 + total_sec2;

        int hour = total / 3600;
        int minute = total % 3600 / 60;
        int second = total % 60;
        return Time(hour, minute, second);
    }
};

int main()
{    
    const Time t1(10, 05, 73);
    const Time t2(12, 22, 33);
    Time t3;
    t1.show();
    t2.show();

    t3 = t1.sum(t2);
    t3.show();
}
