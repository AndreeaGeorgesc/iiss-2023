#include <iostream>
#include <rxcpp/rx.hpp>

int main() {
    // Crear un observable a partir de un vector de eventos
    std::vector<int> eventos = {1, 2, 3, 4, 5};
    auto observable = rxcpp::observable<>::iterate(eventos);

    // Aplicar transformaciones y filtrar los eventos
    auto transformed = observable
        .map([](int value) { return value * 2; })
        .filter([](int value) { return value % 3 == 0; });

    // Suscribirse a los eventos transformados
    transformed.subscribe(
        [](int value) { std::cout << "Evento transformado: " << value << std::endl; }
    );

    // Hacer algún otro trabajo mientras los eventos se procesan en segundo plano
    std::cout << "Realizando otro trabajo..." << std::endl;

    // Esperar a que los eventos se procesen antes de salir
    rxcpp::util::run_loop().wait();

    return 0;
}
