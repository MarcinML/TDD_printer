#ifndef PRINTABLE_H
#define PRINTABLE_H
#include <fstream>

class Printable
{
public:
    Printable(std::string file_name);
    bool render_to_file();
};

#endif // PRINTABLE_H
