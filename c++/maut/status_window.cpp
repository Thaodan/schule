#include <iostream>
#include "mautstelle.hpp"
void status_window(mautstelle Mautstelle)
{
    std::cout << "LKWS\t:" << Mautstelle.lkws() << std::endl; 
    std::cout << "PKWS\t:" << Mautstelle.pkws() << std::endl;
    std::cout << "\t--------------------------------------------------";
    std::cout << "Insgesamt\t:" << Mautstelle.lkws() + Mautstelle.pkws() << "\t";
    std::cout << Mautstelle.kasse() << "€" << std::endl;
}
