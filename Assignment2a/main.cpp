/* Egor Shastin st129457@student.spbu.ru
    This function contains the main code. It gets file, reverses text in file and writes it in new file.
*/


#include <fstream>
#include <iostream>
#include <filesystem>

int main() {
    
    //open file
    std::ifstream infile("input.bin", std::ios::binary|std::ios::in);
    
    //file size
    auto file_size = std::filesystem::file_size("input.bin") - 1;
    
    //array create
    char* arr = new char[file_size];
    infile.read(arr, file_size);
    
    //file close
    infile.close();
    
    //array reverse
    char* arr_reverse = new char[file_size];
    for (std::size_t i = 0; i < file_size; i++){
        arr_reverse[i] = arr[file_size-1-i];
    }
    
    //array write in file
    std::ofstream outfile("outfile.bin", std::ios::binary|std::ios::out);
    outfile.write(arr_reverse, file_size);
    
    //file close
    outfile.close();
    
    delete[] arr;
    delete[] arr_reverse;
    return 1;
}










