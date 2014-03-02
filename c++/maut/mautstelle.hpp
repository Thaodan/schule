#ifndef MAUSTELLE_HPP 
#define MAUSTELLE_HPP
#define PREIS_LKW 2.5
#define PREIS_PKW 1
class mautstelle
{
private:
    int anzahl_lkws;
    int anzahl_pkws;
    float v_kasse;
    void akt_bezahlen(void);
public:    
    mautstelle();
    void lkw_bezahlt(int anzahl = 1);
    void pkw_bezahlt(int anzahl = 1);
    int lkws(void);
    int pkws(void);
    float kasse(void);
};
#endif
