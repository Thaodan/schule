class bruch { 
private:
    int v_nenner;
    int v_zahler;
public:
    bruch();
    bruch(int=0,int=0);
    int nenner(void);
    int zahler(void);
    void addieren(bruch ziel);
    void print(void);
};


