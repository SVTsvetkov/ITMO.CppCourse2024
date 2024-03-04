// Lab11_control_1(time).cpp : This file contains the 'main' function. Program execution begins and ends there.
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
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
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

    Time operator+ (const Time& other) const;
    Time operator- (const Time& other) const;
    Time operator+(double k) const;
    friend Time operator+(double k, const Time& other);
    bool operator>(const Time& other) const;
    bool operator<(const Time& other) const;
};

Time Time::operator+ (const Time& other) const
{
    int total_sec1 = get_total_seconds();
    int total_sec2 = other.get_total_seconds();
    int total = total_sec1 + total_sec2;

    int hour = total / 3600;
    int minute = total % 3600 / 60;
    int second = total % 60;
    return Time(hour, minute, second);
}

Time Time::operator- (const Time& other) const
{
    int total_sec1 = get_total_seconds();
    int total_sec2 = other.get_total_seconds();
    int total = total_sec1 - total_sec2;

    int hour = total / 3600;
    int minute = total % 3600 / 60;
    int second = total % 60;
    return Time(hour, minute, second);
}

Time Time::operator+(double k) const
{
    int m = (int)k;
    int s = (k - m) * 60;

    return Time(hours, minutes + m, seconds + s);
}

bool Time::operator>(const Time& other) const
{
    int total_sec1 = get_total_seconds();
    int total_sec2 = other.get_total_seconds();

    return total_sec1 > total_sec2;
}

bool Time::operator<(const Time& other) const
{
    int total_sec1 = get_total_seconds();
    int total_sec2 = other.get_total_seconds();

    return total_sec1 < total_sec2;
}

Time operator+(double k, const Time& other)
{
    return other + k;
}

int main()
{
    const Time t1(12, 22, 73);
    const Time t2(10, 05, 33);
    Time t3;
    t1.show();
    t2.show();

    t3 = t1 + t2;
    t3.show();

    t3 = t1 - t2;
    t3.show();

    Time t4 = t1 + 2.37;
    t4.show();

    Time t5 = 2.37 + t1;
    t5.show();

    if (t1 > t2) {
        cout << "t1 > t2";
    }
    else {
        cout << "t1 <= t2";
    }
}


