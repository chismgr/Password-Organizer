#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile(string passwordFile[][COLS]) {
ifstream ifs;
ifs.open("UsermanesCIS375.xlsx");
if (!ifs.is_open()) {
cerr << "unable to open UsermanesCIS375.xlsx" << endl;
}
int perNum = 0;
string userName, firstName, lastName, birthDate, cellPhone;
while (!ifs.eof()) {
ifs >> userName >> firstName >> lastName >> birthDate >> cellPhone;
passwordFile[perNum - 1][0] = userName;
passwordFile[perNum - 1][1] = firstName;
passwordFile[perNum - 1][2] = lastName;
passwordFile[perNum - 1][3] = birthDate;
passwordFile[perNum - 1][4] = cellPhone;
perNum = perNum + 1;
}
}
