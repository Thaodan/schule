#include <iostream>
#include <vector> 
#include <fstream>
using namespace std;
struct state {
    int versatz;
};
state conf;

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

string verschlussel(string text)
{
#define UPPERCASE_START 97
#define UPPERCASE_END 122
#define LOWERCASE_START 65
#define LOWERCASE_END 96
    string verschlussel_text;
    vector<int> base_line(2,0);
    for (int white_count=0; white_count < text.size();white_count++)
    {
	if ( verschlussel_text[white_count] > 122 )
	{
	    base_line[0]=UPPERCASE_START;
	    base_line[1]=UPPERCASE_END
	}
	else
	{
	    base_line[0]=LOWERCASE_START;
	    base_line[1]=LOWERCASE_END;
	}
	verschlussel_text[white_count] = 
	    ( text[white_count] - base_line[0] ) + base_line[1];
	     
    }
    return verschlussel_text;
}


int main(void)
{
    fstream input;
    int input_counter;
    conf = new state;

    input.open("/home/bidar/hallo.txt", fstream::in);
    input_counter = count_stream(&input);
    vector<string> input_text(input_counter);
    vector<string> output_text(input_counter);
    stream2string(&input, input_text);
     
    cout << "Bitte Versatz!" << endl;
    cin >> conf->versatz;
    
    for(int count=0; count < input_counter; count++)
    {
	output_text[count] = verschlussel(input_text);
    }
   
    for(int count=0; count < input_counter; count++)
    {
	cout << output_text[count];
    }
   
}
