#include <iostream>
#include "printer.h"




int main()
{

    PrinterXML obj;
    obj.setInputFile("input.txt");
    obj.getOutputFile("output.txt");
    obj.print();
    return 0;
}
