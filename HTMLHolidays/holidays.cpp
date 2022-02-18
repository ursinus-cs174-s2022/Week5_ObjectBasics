#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "dateutils.h"
using namespace std;

/**
 * Setup a string that's required at the beginning of the HTML document,
 * which includes the title "2021/2022 Holidays"
 * @return String at the end of the HTML document
 */
void printHTMLStart() {
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "    <meta charset=utf-8></meta>\n";
    cout << "    <title>2021/2022 Holidays</title>\n";
    cout << "    <style>";
    cout << "    table, th, td {";
    cout << "      border: 1px solid black;";
    cout << "      padding: 15px;";
    cout << "    }";
    cout << "    </style>";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<h1>2021/2022 Holidays</h1>";
    cout << "<table>";
}
    
/**
 * Print a string that's required at the end of the HTML document
 */
void printHTMLEnd() {
    cout << "</table></body>\n</html>";
}


int main() {
    FILE * fin;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fin = fopen("holidays.txt", "r");
    if (fin == NULL)
        exit(EXIT_FAILURE);
    
    printHTMLStart();

    int counter = 0;
    string name;
    int month, day, year;
    while ((read = getline(&line, &len, fin)) != -1) {
        counter++;
        if (counter % 4 == 0) {
            year = atoi(line);
            Holiday holiday(name, day, month, year);
            holiday.printRow();
        } else if (counter % 4 == 3) {
            day = atoi(line);
        } else if (counter % 4 == 2) {
            month = atoi(line);
        } else if (counter % 4 == 1) {
            name = string(line);
        }
    }
    fclose(fin);
    if (line)
        free(line);
    printHTMLEnd();
    return 0;
}