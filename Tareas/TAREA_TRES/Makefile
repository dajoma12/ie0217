# Nombre del programa de salida
TARGET = matriz.exe
TARGET2 = regulares.exe

# Compilador de C++
CXX = g++

# Opciones de compilacion
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = .\src\main.cpp
SOURCES2 = .\src2\main.cpp

# Lista de archivos objetos generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)
OBJECTS2 = $(SOURCES2:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

$(TARGET2): $(OBJECTS2)
	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(OBJECTS2)

# Regla para limpiar los archivos generados
clean:
	del $(TARGET) $(OBJECTS) $(TARGET2) $(OBJECTS2)

# Regla para correr el archivo generado
run: $(TARGET)
	./$(TARGET)

run2: $(TARGET2)
	./$(TARGET2)
