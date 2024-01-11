# Nombre del programa de salida
TARGET = adivina.exe

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = main.cpp adivina.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS) 

# Regla para limpiar los archivos generados
clean:
	del $(TARGET) $(OBJECTS)

# Regla para compilar el código fuente y generar el ejecutable
build: $(TARGET)

# Regla para ejecutar el programa
run: $(TARGET)
	$(TARGET)

# Regla por defecto si no se especifica ningún objetivo
default: build

# Regla para compilar y ejecutar el juego
all: build run
