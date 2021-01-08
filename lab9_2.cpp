#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------\n";
    bool have;
	string textline;
	have = bool(getline(source , textline));
	while(have){
		dest << textline << endl;
		have = bool(getline(source , textline));
	}
	dest << "-------------------- HA!! ---------------------\n";

    source.close();
    dest.close();
	return 0;
}
