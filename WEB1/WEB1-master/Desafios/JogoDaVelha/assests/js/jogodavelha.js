let currentPlayer = 'X';
let player1Wins = 0;
let player2Wins = 0;
let player1Name = '';
let player2Name = '';


// Cadastrar jogador

function cadastrarJogador(playerNumber) {
    const playerName = document.getElementById(`player${playerNumber}`).value.trim();

    if (playerName !== '') {
        if (playerNumber === 1) {
            player1Name = playerName;
            document.getElementById('labelPlayer1').textContent = `Jogador 1: ${player1Name}`;
            alert(`Jogador 1 cadastrado como: ${player1Name}`);
        } else {
            player2Name = playerName;
            document.getElementById('labelPlayer2').textContent = `Jogador 2: ${player2Name}`;
            alert(`Jogador 2 cadastrado como: ${player2Name}`);
        }
    } else {
        alert('Por favor, insira um nome válido para o jogador.');
    }
}

// Atualizar jogador atual

function atualizarJogadorAtual() {
    if (currentPlayer === 'X') {
        currentPlayer = 'O';
    } else {
        currentPlayer = 'X';
    }
}

// Verificar vencedor

function verificarVencedor() {
    // Lógica para verificar vencedor aqui
}

// Função principal

function jogar(id) {
    // Atualizar a celula selecionada pelo jogador atual
    const cell = document.getElementById(id);
    
    if (cell.innerHTML === '') {
        cell.innerHTML = currentPlayer;
        
        // Verificar se houve vencedor
        verificarVencedor();
        
        // Atualizar jogador atual
        atualizarJogadorAtual();
    } else {
        alert('Por favor, escolha outra célula.');
    }
}







/*function cellClick(cell) {
    if (cell.innerText === '' && !checkWinner()) {
        cell.innerText = currentPlayer;
        currentPlayer = currentPlayer === 'X' ? 'O' : 'X'; // ? -> operador ternário
    }
}


/* Fazer a verificação do vencedor.
   Pode ocorrer vitória do jogador 1 ou 2, bem como empate.
   Incrementar contador do vencedor
 */


/*function checkWinner() {
    
    return false;
}*/