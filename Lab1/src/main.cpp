/*

*/

#include "bmp_reader.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Использование: " << argv[0] << " <путь к BMP файлу>" << std::endl;
        return 0;
    }

    BMP_File* bmpf = Load_BMP_File(argv[1]);
    if (bmpf) {
        std::cout << "Размер BMP файла: " << bmpf->bmp_header.file_size << " байт" << std::endl;
        std::cout << "Ширина: " << bmpf->dib_header.width << " пикселей" << std::endl;
        std::cout << "Высота: " << bmpf->dib_header.height << " пикселей" << std::endl;
        Free_BMP_File(bmpf);
    }

    return 0;
}
