#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () 
{
	ifstream words("words.txt");
	ifstream verbnounadj("VerbNounAdj.txt");
	ifstream meaning("Meaning.txt");
	ifstream antonym("Antonym.txt");
	ofstream queries("queries.txt");
	
	while (!words.eof() && !verbnounadj.eof() && !meaning.eof() && !antonym.eof())
	{
		string w, v, m, a;
		getline (words, w);
		getline (verbnounadj, v);
		getline (meaning, m);
		getline (antonym, a);
		queries << "@\"Insert into verbnounadj (word,verbnounadj) Values" << "(\"\"" << w << "\"\", \"\"" << v << "\"\");\"" << "," << endl; 
	}
	return 0;
}