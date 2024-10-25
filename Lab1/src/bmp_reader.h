/*
    
    In this code description function for reader bmp-file.
*/

#ifndef BMP_READER_H
#define BMP_READER_H

#include <cstdint>

// Структура для заголовка BMP файла
#pragma pack(push, 1)
struct BMP_Header {
    uint8_t ID[2];          // Идентификатор файла ('BM')
    uint32_t file_size;      // Размер BMP файла
    uint8_t unused[4];       // Зарезервированные данные
    uint32_t pixel_offset;   // Смещение до начала пиксельных данных
};

// Структура для DIB заголовка
struct DIB_Header {
    uint32_t header_size;       // Размер DIB заголовка
    uint32_t width;             // Ширина изображения в пикселях
    uint32_t height;            // Высота изображения в пикселях
    uint16_t color_planes;      // Количество цветовых плоскостей (1)
    uint16_t bits_per_pixel;    // Количество бит на пиксель
    uint32_t compression;       // Тип сжатия (0 для BI_RGB)
    uint32_t data_size;         // Размер пиксельных данных
    uint32_t print_resolution_x;// Разрешение по оси X (в пикселях на метр)
    uint32_t print_resolution_y;// Разрешение по оси Y (в пикселях на метр)
    uint32_t colors_count;      // Количество цветов в палитре
    uint32_t important_colors;  // Количество важных цветов
};

// Структура для BMP файла
struct BMP_File {
    BMP_Header bmp_header;
    DIB_Header dib_header;
    uint8_t* file_data; // Пиксельные данные
};
#pragma pack(pop)

// Прототипы функций
BMP_File* Load_BMP_File(const char* fname);
void Free_BMP_File(BMP_File* bmp_file);

#endif















































