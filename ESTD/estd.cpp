#include <iostream>
#include <locale> // Biblioteca para configuração de localização
#include <stack> // Biblioteca para pilha
#include <queue> // Biblioteca para fila

// Declarações das estruturas de dados
std::queue<int> fila;
std::stack<int> pilha;

// Definições das funções
void adicionarNumeroFila() {
    int numero;
    std::cout << "Digite um número para adicionar à fila: ";
    std::cin >> numero;
    fila.push(numero);
    std::cout << "Número " << numero << " adicionado à fila." << std::endl;
}

void removerNumeroFila() {
    if (!fila.empty()) {
        int numeroRemovido = fila.front();
        fila.pop();
        std::cout << "Número " << numeroRemovido << " removido da fila." << std::endl;
    } else {
        std::cout << "A fila está vazia. Não há nada para remover." << std::endl;
    }
}

void mostrarPrimeiroUltimoFila() {
    if (!fila.empty()) {
        std::cout << "O primeiro número da fila é: " << fila.front() << std::endl;
        std::cout << "O último número da fila é: " << fila.back() << std::endl;
    } else {
        std::cout << "A fila está vazia." << std::endl;
    }
}

void adicionarNumeroPilha() {
    int numero;
    std::cout << "Digite um número para adicionar à pilha: ";
    std::cin >> numero;
    pilha.push(numero);
    std::cout << "Número " << numero << " adicionado à pilha." << std::endl;
}

void removerNumeroPilha() {
    if (!pilha.empty()) {
        int numeroRemovido = pilha.top();
        pilha.pop();
        std::cout << "Número " << numeroRemovido << " removido da pilha." << std::endl;
    } else {
        std::cout << "A pilha está vazia. Não há nada para remover." << std::endl;
    }
}

void mostrarTopoPilha() {
    if (!pilha.empty()) {
        std::cout << "O topo da pilha é: " << pilha.top() << std::endl;
    } else {
        std::cout << "A pilha está vazia." << std::endl;
    }
}

void menuFila() {
    int opcao;

    std::cout << "================ MENU FILA ================" << std::endl;
    std::cout << "1. Adicionar número na fila" << std::endl;
    std::cout << "2. Remover número da fila" << std::endl;
    std::cout << "3. Mostrar primeiro e último número da fila" << std::endl;
    std::cout << "0. Voltar ao menu principal" << std::endl;
    std::cout << "===========================================" << std::endl;

    while (true) {
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarNumeroFila();
                break;
            case 2:
                removerNumeroFila();
                break;
            case 3:
                mostrarPrimeiroUltimoFila();
                break;
            case 0:
                std::cout << "Voltando ao menu principal..." << std::endl;
                return;
            default:
                std::cout << "Opção inválida. Por favor, escolha novamente." << std::endl;
        }
    }
}

void menuPilha() {
    int opcao;

    std::cout << "======== MENU PILHA ========" << std::endl;
    std::cout << "1. Adicionar número na pilha" << std::endl;
    std::cout << "2. Remover número da pilha" << std::endl;
    std::cout << "3. Mostrar topo da pilha" << std::endl;
    std::cout << "0. Voltar ao menu principal" << std::endl;
    std::cout << "============================" << std::endl;

    while (true) {
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarNumeroPilha();
                break;
            case 2:
                removerNumeroPilha();
                break;
            case 3:
                mostrarTopoPilha();
                break;
            case 0:
                std::cout << "Voltando ao menu principal..." << std::endl;
                return;
            default:
                std::cout << "Opção inválida. Por favor, escolha novamente." << std::endl;
        }
    }
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

    // Exibição do menu principal
    std::cout << "===== MENU PRINCIPAL ====="   << std::endl;
    std::cout << "1. Fila"                      << std::endl;
    std::cout << "2. Pilha"                     << std::endl;
    std::cout << "3. Programa 3"                << std::endl;
    std::cout << "4. Programa 4"                << std::endl;
    std::cout << "5. Programa 5"                << std::endl;
    std::cout << "0. Sair"                      << std::endl;
    std::cout << "=========================="   << std::endl;

    // Loop while para exibir o menu principal repetidamente até que o usuário escolha sair (opção 0)
    while (true) {
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                menuFila();
                break;
            case 2:
                menuPilha();
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
