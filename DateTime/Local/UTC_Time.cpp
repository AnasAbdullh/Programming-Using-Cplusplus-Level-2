#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    time_t t = time(0);   // get time now
    char *dt = ctime(&t); // convert in string form
    cout << "Local date and time is: " << dt << "\n";
    // converting now to tm struct for UTC date/time
    tm *gmtm = gmtime(&t);
    // dt = asctime(gmtm);
    cout << "UTC date and time is: " << dt;

    time_t now = time(0);

    tm *localTime = localtime(&now);
    tm *utcTime = gmtime(&now);

    int offsetHours = localTime->tm_hour - utcTime->tm_hour;

    cout << "Local Time: " << localTime->tm_hour << ":" << localTime->tm_min << endl;
    cout << "UTC Time: " << utcTime->tm_hour << ":" << utcTime->tm_min << endl;
    cout << "Time Zone Offset: UTC" << (offsetHours >= 0 ? "+" : "") << offsetHours << endl;

    return 0;
}