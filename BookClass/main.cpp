//
//  main.cpp
//  lab3
//
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//

//  Author:   	   	    Ian Hartland
//  Class:           	CS-240-01
//  Assignment:         Module-03-Lab Assignment 3 - Basic Book Class 

#include <iostream>
#include <fstream>
#include "book.h"

using namespace std;

int main()
{
	const string FILENAME("books.txt");
   
	ifstream input(FILENAME);
   
	if( input.good() )
	{
		while( !input.eof() )
		{
			string name;
			int type;
			int pages;
			float ounces;
			getline( input, name );
			input >> type >> pages >> ounces;
			input.ignore(INT_MAX, '\n');  //ignore the newline char at the end of the line
         
			//create Book object here!
			Book myBook(name, (Type)type, pages, ounces);
         
			//write out report line for movie here!
			cout << myBook.formatReportLine() << endl;
         
		}
	}
	else
	{
		cout << "File not found: " << FILENAME << endl;
	}
   
	system("pause");
	return 0;
}