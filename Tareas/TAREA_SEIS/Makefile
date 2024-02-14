# Makefile para la tarea 6

# Utilizado para detectar el sistema operativo
ifeq ($(OS),Windows_NT)
    # Comandos utilizados para Windows
    PYTHON = python
    RM = del /Q
    RMDIR = rmdir /Q /S
else
    # Comandos utilizados para Linux
    PYTHON = python3
    RM = rm -f
    RMDIR = rm -rf
endif

# Directorios del programa
SRC_DIR = src/cars_analysis

# Archivos del programa
MAIN_FILE = main.py

# Ejecución por defecto
all: run

# Utilizado para compilar y ejecutar el programa
run:
	$(PYTHON) $(SRC_DIR)/$(MAIN_FILE)

# Utilizado para eliminar
clean:
	$(RM) $(SRC_DIR)/_pycache_/*.pyc
	$(RMDIR) $(SRC_DIR)/_pycache_