#include <iostream>
#include <fstream>

struct kontakt 
{
    std::string name;
    std::string vorname;
    std::string email;
};
// data about input file is static this time
#define DATEI "KA_m1.txt"
#define DATEI_ITEMS 3 
int main(void)
{
    std::ofstream output;
    std::ifstream input;
    std::string output_file_name, line;
    int kontakte_count=0; // counter at which konktakt we are
    int sub_element_count=0; // counter know at which element of kontakte are we 
    int count=0; // line/global counter
    kontakt kontakte[DATEI_ITEMS];
    std::cout << "Bitte Ausgabe-Datei" << std::endl;
    std::cin >> output_file_name;
    input.open(DATEI);

    while ( std::getline(input, line) )
    {
	switch(sub_element_count)
	{
	case 0:
	{
	    kontakte[kontakte_count].name = line;
	    break;
	}
	case 1:
	{
	    kontakte[kontakte_count].vorname = line;
	    break;
	}
	case 2:
	{
	    kontakte[kontakte_count].email = line;
	    break;
	}
	}
	sub_element_count++;
	if ( sub_element_count == 2 )
	    sub_element_count=0;

	count++;
	kontakte_count=count / ( DATEI_ITEMS-2 );
    }
    kontakte_count=0;
    sub_element_count=0;
    input.close();
    output.open(output_file_name.c_str());
    if ( ! output.is_open() )
    {
	std::cerr << "konnte Ausgabe-Datei nicht öffnen" << std::endl;
	return 1;
    }
    std::cout << "Nummer\t" << "Name\t" << "Vorname\t" << "Email\t" << std::endl;  
    while ( count == 0 )
    {
	switch(sub_element_count)
	{
	case 0:
	{
	    output << kontakte[kontakte_count].name << "\t";
	    std::cout << kontakte[kontakte_count].name << "\t";
	    break;
	}
	case 1:
	{
	    output << kontakte[kontakte_count].vorname << "\t";
	    std::cout << kontakte[kontakte_count].vorname << "\t"; 
	    break;
	}
	case 2:
	{
	    output << kontakte[kontakte_count].email;
	    std::cout << kontakte[kontakte_count].email;
	    break;
	}
	}
	output << std::endl;
	std::cout << std::endl;
	sub_element_count++;
	if ( sub_element_count == 2 )
	    sub_element_count=0;

	count--;
	kontakte_count=count / ( DATEI_ITEMS-2 );
    }
    output.close();
    return 0;
}
