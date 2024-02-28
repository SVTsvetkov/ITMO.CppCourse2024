// Lab7_control_1(struct_time).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;

    int get_total_seconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time sum(Time other) {
        int total_sec1 = get_total_seconds();
        int total_sec2 = other.get_total_seconds();
        int total = total_sec1 + total_sec2;

        Time res;
        res.seconds = total;
        return res;
    }

    Time diff(Time other) {
        int total_sec1 = get_total_seconds();
        int total_sec2 = other.get_total_seconds();
        int total = total_sec1 - total_sec2;

        Time res;
        res.seconds = total;
        return res;
    }
};

    int main()
    {       
        system("chcp 1251");

        Time t;
        cout << "Введите время (часы минуты секунды) ";
        cin >> t.hours >> t.minutes >> t.seconds;

        int total_seconds = t.get_total_seconds();
        cout << "Время в секундах = " << total_seconds << endl;

        Time other;
        cout << "Введите другое время (часы минуты секунды) ";
        cin >> other.hours >> other.minutes >> other.seconds;

        Time sum = t.sum(other);
        cout << "Результат суммирования: " << sum.seconds << endl;

        Time diff = t.diff(other);
        cout << "Результат вычитания: " << diff.seconds << endl;
    }
    