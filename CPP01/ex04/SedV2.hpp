#ifndef SEDV2_HPP
#define SEDV2_HPP
#include <fstream>
#include <iostream>

class SedV2 {
    public:
    SedV2(std::string filename);
    ~SedV2();
    void    replace(std::string find, std::string replace);

    private:
    std::string _infile;
    std::string _outfile;
};

#endif