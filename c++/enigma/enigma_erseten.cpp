#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#define STARTWERT 65
vector<int> walze = {2,4,0,1,11,5,3,6,13,7,17,25,8,15,20,9,12,16,22,18,21,19,24,14,23};

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
    for ( int index=0; index <= text.size(); index++)
    {
	verschlussel_text[index] = char(walze[
					    (verschlussel_text_zahl[index]
					     + versatz) % 26] + STARTWERT);
    }
    return verschlussel_text;
}

string entschlussel(string cybertext)
{
    string klar_text(cybertext.size());
    vector<int> cybertext_int(cybertext.size()) = umwandeln(cybertext);
    int versatz=0;
    vector<int>::iterator it;
    for (int i=0;i < cybertext_int.size();i++)
    {
	it = find( walze.begin(), walze.end() (cybertext_int[i] - versatz % 26 ) );
	klar_text[i] = char(walze[it] + STARTWERT);
	versatz++;
    }

    return klar_text;
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

vector<string>  stream2string (ifstream *stream_raw, int size)
{
    string line;
    vector<string> stream(size);
    int counter=0;
    while ( getline(*stream_raw, line) )
    {
	stream[counter]=line;
	counter++;
    } 

    return stream;
}
int main(int argc, char* argv[])
{       
    ifstream input;
    int input_counter;
    input.open("/home/bidar/hallo.txt", fstream::in);
    input_counter = stream_count(&input);
    vector<string> text(input_counter);
    vector<string> text2(input_counter);
    text = stream2string(&input,input_counter);
    text2[0] = verschlussel(text[0]);
    for(int i=0; i < text2[0].length();i++)
    {
	cout << text2[0][i];
    }
	     
    return 0;
}


