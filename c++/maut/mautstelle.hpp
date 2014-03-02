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
    void lkw_bezahlt(int anzahl);
    void pkw_bezahlt(int anzahl);
    float klasse(void);
}
