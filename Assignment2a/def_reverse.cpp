/* Egor Shastin st129457@student.spbu.ru
    This function contains the main code
*/

#include "def_reverse_header.h"
#include <fstream>
#include <iostream>
#include <filesystem>
#include <vector>

int reverse(){

    //open file
    std::ifstream infile("input.bin", std::ios::binary|std::ios::in);
    if (!infile) {
        std::cerr << "Error: Failed to open file." << std::endl;
        std::cerr << "Maybe, your file heve a wrong name. Rename your file in 'input.bin'" << std::endl;
        return 1;
    }
    
    //file size
    auto file_size = std::filesystem::file_size("input.bin");
    
    //array create
    std::vector<char> arr(file_size);
    infile.read(arr.data(), file_size);
    
    //file close
    infile.close();
    
    //array reverse
    std::vector<char> arr_reverse(file_size);
    for (std::size_t i = 0; i < file_size; i++){
        arr_reverse[i] = arr[file_size-1-i];
    }
    
    //array write in file
    std::ofstream outfile("outfile.bin", std::ios::binary|std::ios::out);
    if (!outfile) {
        std::cerr << "Error writing in file" << std::endl;
        std::cerr << "Maybe, your file heve a wrong name. Rename your file in 'outfile.bin'" << std::endl;
        return 1;
    }
    outfile.write(arr_reverse.data(), file_size);
    
    //file close
    outfile.close();
    return 1;
}
