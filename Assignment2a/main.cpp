/*
	in this file 
*/

#include "def_Polsku_zap.h"

int main() {
    std::ifstream inputFile("input.bin", std::ios::binary|std::ios::in);
    if (!inputFile) {
        std::cerr << "failed to open file" << std::endl;
        return 1;
    }
    
    std::streamsize fileSize = inputFile.tellg();
    infile.open("source.pdf", std::ios::binary|std::ios::in);
    
    std::ofstream outfile;
    std::outfile.open("temppdf.pdf", std::ios::binary|std::ios::out);
    infile.read((char *)&buffer, sizeof(buffer))
    outfile.write((char *)&buffer, sizeof(buffer));
    
    infile.close();
    outfile.close();
}
