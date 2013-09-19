#ifndef KABUCH_HPP
#define KABUCH_HPP
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct schuler {
      string name;
      string vorname;
      int noten;
      float durchschnitt;
};

void stub(void);
vector<string> split(std::string regex, string text); 
int lieszahl(void);
bool eingabe(schuler klasse[]);
void tab_ausgabe(schuler klasse[]);
void histogramm(schuler klasse[]);
#endif
