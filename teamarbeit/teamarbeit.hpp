#ifndef TEAMARBEIT_HPP
#define TEAMARBEIT_HPP

#include <iostream>
#include <algorithm> 

#define EINGABE_MAX_WERTE 3
bool eingabe(int eingabe[]);
void ausgabe(int max, int faku);
void berechne(int eingabe[], int *max_wert, int *faku_wert);
int faku(int eingabe[]);
#endif  
