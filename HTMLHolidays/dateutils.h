#ifndef DATEUTILS_H
#define DATEUTILS_H
#include <string>
using namespace std;
string getWeekday(int year, int month, int day);
string getMonthString(int month);



class Holiday {
    public:
        string name;
        int month;
        int day;
        int year;

        Holiday(string name, int month, int day, int year);
        void printRow();
};

#endif