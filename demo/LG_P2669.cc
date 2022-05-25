#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int totalDays = 0;
    cin >> totalDays;

    int totalSalary = 0;
    int salary = 1;
    int dayToRaise = 1;
    int date = 1;

    while (date <= totalDays)
    {
        if (dayToRaise)
        {
            --dayToRaise;
            totalSalary += salary;
            ++date;
        }
        else
        {
            ++salary;
            dayToRaise = salary;
        }
    }

    cout << totalSalary;

    return 0;
}