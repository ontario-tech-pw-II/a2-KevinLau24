#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;

  	if (argc != 3) // check if it is successful 
 	{
 		cerr << "Number of arguments is incorrect!" << endl;
 		return 1;
 	}	


 	fin.open(argv[1]);

 	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

 	fout.open(argv[2]);
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		//fin >> c;		
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 