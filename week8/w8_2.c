#include <stdio.h>
#include <stdbool.h>

bool LeapYear(int year);
bool Kom(int month);
bool Yon(int month);

int main()
{
    int d, m, y;
    printf("Enter Date : ");
    scanf("%d %d %d", &d, &m, &y);

    int day;
    if (Kom(m))
    {
        day = 31;
    }
    else if (Yon(m))
    {
        day = 30;
    }
    else // Feb
    {
        day = 28 + LeapYear(y);
    }
    
    int newday = (d % day) + 1;
    int newmonth = (m + (d / day)) % 12;
    int newyear = y + ((m + (d / day)) / 12);

    printf("%d %d %d", newday, newmonth, newyear);

    return 0;
}
bool Yon(int month)
{
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return true;
    }
    return false;
}
bool Kom(int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return true;
    }
    return false;
}
bool LeapYear(int year)
{
    if (year % 4 != 0)
    {
        return false;
    }
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}