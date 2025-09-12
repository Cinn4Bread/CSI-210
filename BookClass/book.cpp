#include <iomanip>
#include <sstream>
#include <cmath>
#include "book.h"

/*  
    Author:   	   	    Ian Hartland
    Class:           	CS-240-01 : Advanced Programming
    Assignment:         Module-03-Lab Assignment 3 - Basic Book Class
    Date Assigned:      9/5/2025
    Due Date:           9/12/2025 at 11:59PM
*/

/*
    Project Description :
    "Create a Book class, read file containing book info, then generate a report"

    Certification of Authenticity :
    I certify that this is entirely my own work, except where I have given
    fully-documented references to the work of others. I understand the
    definition and consequences of plagiarism and acknowledge that the assessor
    of this assignment may, for the purpose of assessing this assignment:
    - Reproduce this assignment and provide a copy to another member of
    academic staff; and/or
    - Communicate a copy of this assignment to a plagiarism checking
    service (which may then retain a copy of this assignment on its
    database for the purpose of future plagiarism checking)
*/

Book::Book()
{
    bName = "";
    bType = UNKNOWN;
    bPages = 0;
    bOunces = 0.0;
}

Book::Book(const string& name, Type type, int pages, float ounces)
{
    bName = name;
    bType = type;
    bPages = pages;
    bOunces = ounces;
}

string Book::formatReportLine() //return a string with all the info for the book
{
    ostringstream sout;

    const int SPACING = 10; //spacing to make sure all entries line up neatly
    const int SPACING_LARGE = 30; //larger spacing to cover longer book names

    sout << right << setw(SPACING_LARGE) << getName() << " | "
         << "Type: " << setw(SPACING) << getTypeName() << " | "
         << "Pages: " << getPages() << " | "
         << "Weight(lbs): " << getWeightLbs() << " |";

    return sout.str();
};

float Book::getWeightLbs() //calculate and return the weight of the book in lbs
{
    const int OZ_IN_POUND = 16;
    const int ROUND_TO_ONE = 10;

    float conversion = getOunces() / OZ_IN_POUND;
    return round(conversion * ROUND_TO_ONE) / ROUND_TO_ONE; //round to one decimal point
};

string Book::getTypeName() //return the string which correlates with the book type
{   
    if (getType() == UNKNOWN || getType() < UNKNOWN) //prevent invalid types under -1 from throwing error
    {
        return "Unknown";
    }

    return TYPE_WORDS[getType()];
};