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
}
    
/**
 * Print a string that's required at the end of the HTML document
 */
void printHTMLEnd() {
    cout << "</body>\n</html>";
}



int main() {
    FILE * fin;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fin = fopen("holidays.txt", "r");
    if (fin == NULL)
        exit(EXIT_FAILURE);
    
    int counter;
    string s;
    int month, day, year;
    while ((read = getline(&line, &len, fin)) != -1) {
        // The "line" variable holds a character array for that line
        // You can convert this to a string by using the string constructor
        // string s(line);
        // You can convert it to an int by using atoi
        // int x = atoi(line);
    }
    fclose(fin);
    if (line)
        free(line);
    exit(EXIT_SUCCESS);
    return 0;
}