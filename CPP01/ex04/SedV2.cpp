#include "SedV2.hpp"

SedV2::SedV2(std::string filename): _infile(filename) {
    this->_outfile = this->_infile + ".replace";
}

SedV2::~SedV2() {

}

void    SedV2::replace(std::string find, std::string replace) {
    std::ifstream   ifs(this->_infile);

    if (ifs.is_open()) {
        std::ofstream   ofs(this->_outfile);
        std::string     tmp;
        while (std::getline(ifs, tmp)) {
            size_t found = tmp.find(find);
            while (found != std::string::npos) {
                tmp.replace(found, find.length(), replace);
                found = tmp.find(find, found + replace.length());
            }
            ofs << tmp << '\n';
        }
        ifs.close();
        ofs.close();
    } else {
        std::cout << "Cannot open this file" << std::endl;
    }
}