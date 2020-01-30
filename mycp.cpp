#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]){
	
	string input = string(argv[1]);
	string output = string(argv[2]);
	
	ifstream fin(input);
 	ofstream fout(output);
	
	// check if there are enough arguments
	if(argc != 3){
 		cerr << "Number arguments is incorrect!" << endl;
 		return 1;
 	}

 	if (fin.fail()){
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	
	string c;

	// open the second file
	
 	if (fout.fail()){
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
	while (getline(fin, c)){
		
		fin >> c;
		cout << c << endl;
		fout << c << endl;
	}
 	
 	fin.close(); 

 	fout.close();

 	return 0;

 } 