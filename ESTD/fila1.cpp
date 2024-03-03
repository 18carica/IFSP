#include <iostream>
#include <locale>

// Definição do tamanho máximo do vetor
const int MAX_SIZE = 100;

// Estrutura de dados para a fila
struct Fila {
    int elementos[MAX_SIZE];
    int inicio;
    int fim;
};

// Função para inicializar a fila
void inicializarFila(Fila &fila) {
    fila.inicio = 0;
    fila.fim = 0;
}

// Função para verificar se a fila está vazia
bool filaVazia(Fila &fila) {
    return fila.inicio == fila.fim;
}

// Função para adicionar um elemento na fila
void enfileirar(Fila &fila, int valor) {
    fila.elementos[fila.fim] = valor;
    fila.fim++;
}

// Função para remover um elemento da fila
int desenfileirar(Fila &fila) {
    int valor = fila.elementos[fila.inicio];
    fila.inicio++;
    return valor;
}

// Estrutura de dados para a pilha
struct Pilha {
    int elementos[MAX_SIZE];
    int topo;
};

// Função para inicializar a pilha
void inicializarPilha(Pilha &pilha) {
    pilha.topo = 0;
}

// Função para verificar se a pilha está vazia
bool pilhaVazia(Pilha &pilha) {
    return pilha.topo == 0;
}

// Função para adicionar um elemento na pilha
void empilhar(Pilha &pilha, int valor) {
    pilha.elementos[pilha.topo] = valor;
    pilha.topo++;
}

// Função para remover um elemento da pilha
int desempilhar(Pilha &pilha) {
    pilha.topo--;
    return pilha.elementos[pilha.topo];
}

// Funções programa1 e programa2 utilizando fila e pilha, respectivamente
void programa1() {
    Fila fila;
    inicializarFila(fila);

    // Exemplo de utilização da fila
    std::cout << "Programa 1 - Fila" << std::endl;
    enfileirar(fila, 1);
    enfileirar(fila, 2);
    enfileirar(fila, 3);

    while (!filaVazia(fila)) {
        std::cout << desenfileirar(fila) << " ";
    }
    std::cout << std::endl;
}

void programa2() {
    Pilha pilha;
    inicializarPilha(pilha);

    // Exemplo de utilização da pilha
    std::cout << "Programa 2 - Pilha" << std::endl;
    empilhar(pilha, 1);
    empilhar(pilha, 2);
    empilhar(pilha, 3);

    while (!pilhaVazia(pilha)) {
        std::cout << desempilhar(pilha) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int opcao;

    // Configura a localização para Português
    setlocale(LC_ALL, "Portuguese");

    // Exibição do menu
    std::cout << "===== MENU =====" << std::endl;
    std::cout << "1. Fila" << std::endl;
    std::cout << "2. Pilha" << std::endl;
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
                // Adicione chamadas para os outros programas, se necessário
                break;
            case 4:
                // Adicione chamadas para os outros programas, se necessário
                break;
            case 5:
                // Adicione chamadas para os outros programas, se necessário
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
