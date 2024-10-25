/*

*/

#include "bmp_reader.h"
#include <iostream>
#include <fstream>

// Функция для загрузки BMP файла
BMP_File* Load_BMP_File(const char* fname) {
    std::ifstream file(fname, std::ios::binary);
    if (!file) {
        std::cerr << "Не удается открыть файл: " << fname << std::endl;
        return nullptr;
    }

    BMP_File* bmp_file = new BMP_File();

    // Чтение заголовка BMP
    file.read(reinterpret_cast<char*>(&bmp_file->bmp_header), sizeof(BMP_Header));
    if (bmp_file->bmp_header.ID[0] != 'B' || bmp_file->bmp_header.ID[1] != 'M') {
        std::cerr << "Неверный формат файла!" << std::endl;
        delete bmp_file;
        return nullptr;
    }

    // Чтение DIB заголовка
    file.read(reinterpret_cast<char*>(&bmp_file->dib_header), sizeof(DIB_Header));

    // Чтение пиксельных данных
    bmp_file->file_data = new uint8_t[bmp_file->dib_header.data_size];
    file.seekg(bmp_file->bmp_header.pixel_offset, std::ios::beg);
    file.read(reinterpret_cast<char*>(bmp_file->file_data), bmp_file->dib_header.data_size);

    file.close();
    return bmp_file;
}

// Функция для освобождения памяти
void Free_BMP_File(BMP_File* bmp_file) {
    if (bmp_file) {
        delete[] bmp_file->file_data;
        delete bmp_file;
    }
}















