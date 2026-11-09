#include <iostream>
#include <fstream>
#include <string>
#include <iostream>

void contarLineas(const std::string& rutaArchivo) {
    std::ifstream archivo(rutaArchivo);
    if (!archivo.is_open()) {
        std::cout << "Error: El archivo '" << rutaArchivo << "' no existe o la ruta es incorrecta." << std::endl;
        return;
    }
    std::string linea;
    int totalLineas = 0;
    while (std::getline(archivo, linea)) {
        totalLineas++;
    }
    std::cout << "El archivo '" << rutaArchivo << "' contiene " << totalLineas << " líneas." << std::endl;
}

int main() {

    contarLineas("archivo.txt");
    return 0;
}