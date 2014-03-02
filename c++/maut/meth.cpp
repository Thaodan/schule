#include "mautstelle.hpp"
mautstelle::mautstelle()
{
    anzahl_lkws=0;
    anzahl_pkws=0;
    v_kasse=0;
}

float kasse(void)
{
    return v_kasse;
}
void mautstelle::akt_bezahlen(void)
{
    v_kasse=(anzahl_lkws*PREIS_LKW)+(anzahl_pkws*PREIS_PKW);
}
void mautstelle::lkw_bezahlt(int anzahl=1)
{
    anzahl_lkws+=anzahl;
    akt_bezahlen();
}


void mautstelle::pkw_bezahlt(int anzahl=1)
{
    anzahl_pkws=+anzahl;
    akt_bezahlen();
}
