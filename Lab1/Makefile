# Имя исполняемого файла
TARGET = bmp_reader

# Директории
SRC_DIR = src
OBJ_DIR = obj

# Компилятор и флаги
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Исходные файлы
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# Объектные файлы
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Цель по умолчанию
all: $(TARGET)

# Правило для сборки исполняемого файла
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Правило для сборки объектных файлов
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка сгенерированных файлов
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)

# Очистка объектных файлов, но сохранение исполняемого файла
clean_obj:
	rm -f $(OBJ_DIR)/*.o

# Тестирование программы
run: $(TARGET)
	./$(TARGET) $(OBJ_DIR)/example.bmp

.PHONY: all clean clean_obj run






