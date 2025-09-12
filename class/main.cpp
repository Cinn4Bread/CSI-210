#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Person
{
    public:
    Person()
    {
        name = "null";
        birthMonth = 1;
    }

    Person(string aName, int aMonth)
    {
        name = aName;
        setBirthMonth(aMonth);
    } 

    ~Person()
    {
        fout.close();
        cout << "killing person\n";
    }

    void setBirthMonth(int month)
    {
        if(month > 12 || month < 1)
        {
            cout << "Invalid birth month!" << endl;
            month = 1;
        }
        birthMonth = month;
    }

    void print()
    {
        cout << "Name: " << name << endl
             << "Birth Month: " << birthMonth << endl
             << "------------\n";
    }

    private:
    ofstream fout;
    string name;
    int birthMonth;
};

int main()
{
    Person issac("Issac Roy", 12);
    issac.print();

    Person noah;
    noah.setBirthMonth(45);
    noah.print();

    return 0;
}