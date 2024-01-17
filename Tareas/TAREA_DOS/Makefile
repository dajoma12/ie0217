# Nombre del programa de salida
TARGET = biblioteca.exe

# Compilador de C++
CXX = g++

# Opciones de compilacion
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = .\src\main.cpp .\src\Libro.cpp .\src\Noticia.cpp .\src\MaterialLectura.cpp .\src\MaterialAudiovisual.cpp .\src\Pelicula.cpp .\src\MaterialOrdenado.cpp .\src\Podcast.cpp


# Lista de archivos objetos generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
# Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados
clean:
	del $(TARGET) $(OBJECTS)

# Regla para correr el archivo generado
run: $(TARGET)
	./$(TARGET)