#include "printer.h"
#include <iostream>
#include <string>

using namespace std;



void Printer::setInputFile(string a)
{
    inputFile = a;
}

void Printer::getOutputFile(string a)
{
    outputFile = a;
}

string Printer::readContent()
{
    return "cos robi";
}

string Printer::getInput()
{
    return inputFile;
}
string Printer::getOutput()
{
    return outputFile;
}
int sum(int a,int b)
{
    return a+b;
}
