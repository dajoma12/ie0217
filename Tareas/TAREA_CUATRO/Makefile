# Makefile Tarea 4

# Se utiliza para detectar el sistema operativo
ifeq ($(OS),Windows_NT)
    # Establece los comandos para windows
    PYTHON = python
    RM = del /Q
    RMDIR = rmdir /Q /S
else
    # Establece los comandos para linux
    PYTHON = python3
    RM = rm -f
    RMDIR = rm -rf
endif

# Directorios a buscar
SRC_DIR = src

# Archivos a buscar
MAIN_FILE = InterfazUsuario.py

# Por defecto
all: run

# Oara compilar y ejecutar el programa
run:
	$(PYTHON) $(SRC_DIR)/$(MAIN_FILE)

# Para limpiar u obligar a limpiar
clean:
	$(RM) $(SRC_DIR)/__pycache__/*.pyc
	$(RMDIR) $(SRC_DIR)/__pycache__