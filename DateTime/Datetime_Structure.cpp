#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    time_t Time = time(0);
    char *times = ctime(&Time);

    cout << Time << endl;
    cout << times << endl;

    cout << *times << endl;

    time_t t = time(0); // get time now
    tm *now = localtime(&t);

    cout << t << endl;
    cout << now << endl;

    // cout << now->tm_year + 1900 << endl;
    // cout << now->tm_gmtoff << endl;
    // cout << now->tm_sec << endl;
    // cout << now->tm_mon + 1 << endl;
    // cout << now->tm_mday << endl;
    // cout << now->tm_min << endl;
    cout << "Year: " << now->tm_year + 1900 << endl;
    cout << "Month: " << now->tm_mon + 1 << endl;
    cout << "Day: " << now->tm_mday << endl;
    cout << "Hour: " << now->tm_hour << endl;
    cout << "Min: " << now->tm_min << endl;
    cout << "Second: " << now->tm_sec << endl;
    cout << "Week Day (Days since sunday): " << now->tm_wday << endl;
    cout << "Year Day (Days since Jan 1st): " << now->tm_yday << endl;
    cout << "hours of daylight savings:" << now->tm_isdst << endl;

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", now);
    cout << "Local time: " << buffer << endl;

    tm *utc = gmtime(&t);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", utc);
    cout << "UTC time: " << buffer << endl;

    return 0;
}