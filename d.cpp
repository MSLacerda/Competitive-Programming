#include <iostream>
#include <string>

using namespace std;

int main()
{
    int value;
    string result;

    cin >> value;
    if (value >= 900 && value < 1000)
    {
        result.append("CM");
        value -= 900;
    }

    if (value >= 400 && value < 500)
    {
        result.append("CD");
        value -= 400;
    }
    
    if ((value / 500) > 0)
    {

        result.append(string((int)value / 500, 'D'));
        value -= ((int)value / 500) * 500;
    }
    if (value >= 90 && value < 100)
    {
        result.append("XC");
        value -= 90;
    }
    if ((value / 100) > 0)
    {

        result.append(string((int)value / 100, 'C'));
        value -= ((int)value / 100) * 100;
    }

    if (value >= 40 && value < 50)
    {
        result.append("XL");
        value -= 40;
    }
    if ((value / 50) > 0)
    {

        result.append(string((int)value / 50, 'L'));
        value -= ((int)value / 50) * 50;
    }

    if (value == 9)
    {
        result.append("IX");
        value = 0;
    }
    if ((value / 10) > 0)
    {

        result.append(string((int)value / 10, 'X'));
        value -= ((int)value / 10) * 10;
    }

    if (value == 4)
    {
        result.append("IV");
    }
    if ((value / 5) > 0)
    {

        result.append(string((int)value / 5, 'V'));
        value -= ((int)value / 5) * 5;
    }

    if (value > 0 && value < 4)
    {
        result.append(string((int)value, 'I'));
        value = (int)value;
    }

    cout << result << endl;
}