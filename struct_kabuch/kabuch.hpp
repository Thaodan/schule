#ifndef KABUCH_HPP
#define KABUCH_HPP
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct schuler {
    string name;
    string vorname;
    vector<int> noten[];
    float durchschnitt;
};
#define STUB cout << "stub in __FILE_:__LINE_"
vector<string> split(char delim[], string str); 
int lieszahl(void);
bool eingabe(vector<schuler> *klasse);
void tab_ausgabe(vector<schuler> *klasse);
void histogramm(vector<schuler> *klasse);
#endif
