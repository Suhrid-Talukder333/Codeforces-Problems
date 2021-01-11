#include <bits/stdc++.h>
using namespace std;

int main()
{
    string wake;
    cin >> wake;
    string pass;
    cin >> pass;
    int wakeHour, wakeMin, passHour, passMin;
    string min = "", hour = "";
    for (int i = 0; i <= 1; i++)
    {
        hour += wake[i];
    }
    for (int i = 3; i <= 4; i++)
    {
        min += wake[i];
    }
    wakeMin = stoi(min);
    wakeHour = stoi(hour);
    min = hour = "";
    for (int i = 0; i <= 1; i++)
    {
        hour += pass[i];
    }
    for (int i = 3; i <= 4; i++)
    {
        min += pass[i];
    }
    passMin = stoi(min);
    passHour = stoi(hour);
    // cout << wakeHour << " " << wakeMin;
    int ansHour, ansMin;
    if (passMin > wakeMin)
    {
        passHour++;
        ansMin = 60 - abs(wakeMin - passMin);
    }
    else
    {
        ansMin = wakeMin - passMin;
    }
    if (passHour > wakeHour)
    {
        ansHour = 24 - abs(wakeHour - passHour);
    }
    else
    {
        ansHour = wakeHour - passHour;
    }
    if (ansHour < 10)
    {
        cout << "0" << ansHour << ":";
    }
    else
    {
        cout << ansHour << ":";
    }
    if (ansMin < 10)
    {
        cout << "0" << ansMin;
    }
    else
    {
        cout << ansMin;
    }
}