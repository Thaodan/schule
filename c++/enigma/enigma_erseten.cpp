#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define STARTWERT 65
int walze[26];

vector<int> umwandeln(string text)
{
    vector<int> ruckgabe_text(text.size());
    char tmp;
    for ( int index=0; index < text.size();index++)
    {
	tmp=text[index];   
	ruckgabe_text[index] = int(tmp) - STARTWERT;
    }  
    return ruckgabe_text;
}

string verschlussel(string text)
{
    string verschlussel_text;
    vector<int> verschlussel_text_zahl = umwandeln(text);
    int versatz=0;
    for ( int index=0; index < verschlussel_text_zahl.size(); index++)
    {
	verschlussel_text[index] = char(walze[
					    (verschlussel_text_zahl[index]
					     + versatz) % 26] + STARTWERT);
    }
    cout << verschlussel_text;
    return verschlussel_text;
}
int stream_count(ifstream *stream_raw)
{
    int counter=0;
    string line;
    while ( getline(*stream_raw, line))
    {
	counter++;
    }
    // reset state
    stream_raw->clear();
    stream_raw->seekg(0);
    return counter;
}
void stream2string (ifstream *stream_raw, vector<string> stream)
{
    string line;
    int counter=0;
    while ( getline(*stream_raw, line) )
    {
	stream[counter]=line;
	counter++;
    }
}
int main(int argc, char* argv[])
{       
    walze[0] = 1;
    ifstream input;
    int input_counter;
    input.open("/home/bidar/hallo.txt", fstream::in);
    input_counter = stream_count(&input);
    vector<string> text(input_counter);
    vector<string> text2(input_counter);
    stream2string(&input, text);
    text2[0] = verschlussel(text[0]);
    for(int i=0; i < text2.size();i++)
    {
	cout << text2[i];
    }
	     
    return 0;
}


