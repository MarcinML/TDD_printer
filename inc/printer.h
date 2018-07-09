#ifndef PRINTER_H
#define PRINTER_H
#include <string>
#include <iostream>

using namespace std;


class Printer
{
private:
    string inputFile;
    string outputFile;
public:
    virtual void print()=0;
    void setInputFile(string); //pobiera sciezke
    void getOutputFile(string); //zwraca sciezke
    string readContent(); //
    string getInput();
    string getOutput();
};

int sum(int,int);

class PrinterXML : public Printer
{
public:
    void print() override{cout<<"printXML";}
};

class PrinterHTML : public Printer
{
public:
    void print() override{cout<<"printHTML";}
};

#endif // PRINTER_H
