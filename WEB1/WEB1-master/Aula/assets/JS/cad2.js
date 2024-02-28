var cadastros = [];
    
function adicionarCadastro() {
    var nome = document.getElementById("nome").value;
    var email = document.getElementById("email").value;
    var telefone = document.getElementById("telefone").value;

    if (nome && email && telefone) {
        var cadastro = { nome: nome, email: email, telefone: telefone };
        cadastros.push(cadastro);

        atualizarDataGrid();

        document.getElementById("nome").value = "";
        document.getElementById("email").value = "";
        document.getElementById("telefone").value = "";
        document.getElementById("nome").focus();
    } else {
        alert("Todos os campos devem ser preenchidos!");
    }

}

function atualizarDataGrid() {
    var tbody = document.querySelector("#datagrid tbody");
    tbody.innerHTML = "";

    for (var i = 0; i < cadastros.length; i++) {
        var cadastro = cadastros[i];

        var row = document.createElement("tr");
        var cellNome = document.createElement("td");
        var cellEmail = document.createElement("td");
        var cellTelefone = document.createElement("td");
        var cellAcoes = document.createElement("td");
        var buttonExcluir = document.createElement("button");

        buttonExcluir.textContent = "Excluir";
        buttonExcluir.addEventListener("click", (function (index) {
            return function () {
                excluirCadastro(index);
            };
        })(i));

        cellNome.textContent = cadastro.nome;
        cellEmail.textContent = cadastro.email;
        cellTelefone.textContent = cadastro.telefone;

        cellAcoes.appendChild(buttonExcluir);

        row.appendChild(cellNome);
        row.appendChild(cellEmail);
        row.appendChild(cellTelefone);
        row.appendChild(cellAcoes);

        tbody.appendChild(row);
    }
}

function excluirCadastro(index) {
    cadastros.splice(index, 1);
    atualizarDataGrid();
}