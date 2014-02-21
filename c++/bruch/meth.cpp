#include "bruch.hpp"
#include <iostream>
void bruch::print(void)
{
    std::cout << v_zahler << "/" << v_nenner << std::endl;
}
int  bruch::zahler(void)
{
    return v_zahler;
}
int bruch::nenner(void)
{
    return v_nenner;
}
void bruch::addieren(bruch ziel)
{
    if ( v_nenner + ziel.nenner() )
    {
	v_zahler = v_zahler + ziel.zahler();
	v_nenner = v_nenner + ziel.nenner();
    }
}

bruch::bruch()
{
    v_zahler = 0;
    v_nenner = 1;
}

bruch::bruch(int zahler, int nenner)
{
    v_zahler = zahler;
    v_nenner = nenner;
}
