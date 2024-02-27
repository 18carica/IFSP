#include <iostream>
#include <locale> // Biblioteca para configuração de localização


// Definições das funções dos programas
void programa1() {
    std::cout << "Você escolheu o Programa 1." << std::endl;
    // Implemente o código do Programa 1 aqui
}

void programa2() {
    std::cout << "Você escolheu o Programa 2." << std::endl;
    // Implemente o código do Programa 2 aqui
}

void programa3() {
    std::cout << "Você escolheu o Programa 3." << std::endl;
    // Implemente o código do Programa 3 aqui
}

void programa4() {
    std::cout << "Você escolheu o Programa 4." << std::endl;
    // Implemente o código do Programa 4 aqui
}

void programa5() {
    std::cout << "Você escolheu o Programa 5." << std::endl;
    // Implemente o código do Programa 5 aqui
}

int main() {
    int opcao;

    // Configura a localização para Português
    setlocale(LC_ALL, "Portuguese");

    // Exibição do menu
    std::cout << "===== MENU =====" << std::endl;
    std::cout << "1. Programa 1" << std::endl;
    std::cout << "2. Programa 2" << std::endl;
    std::cout << "3. Programa 3" << std::endl;
    std::cout << "4. Programa 4" << std::endl;
    std::cout << "5. Programa 5" << std::endl;
    std::cout << "0. Sair" << std::endl;
    std::cout << "================" << std::endl;

    // Loop while para exibir o menu repetidamente até que o usuário escolha sair (opção 0)
    while (true) {
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        // Executa o programa correspondente à opção escolhida
        switch (opcao) {
            case 1:
                programa1();
                break;
            case 2:
                programa2();
                break;
            case 3:
                programa3();
                break;
            case 4:
                programa4();
                break;
            case 5:
                programa5();
                break;
            case 0:
                std::cout << "Saindo..." << std::endl;
                return 0; // Termina o programa
            default:
                std::cout << "Opção inválida. Por favor, escolha novamente." << std::endl;
        }
    }

    return 0;
}
