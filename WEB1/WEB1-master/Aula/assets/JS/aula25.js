function btn1(){
    document.getElementById("saida").innerHTML += "<p>Cliquei no Botao 1</p>"
}
function btn2(){
    document.getElementById("saida").innerHTML += "<p>Cliquei no Botao 2</p>"
}
function btn3(){
    document.getElementById("saida").innerHTML += "<p>Cliquei no Botao 3</p>"
}
function btn4(){
    document.getElementById("saida").innerHTML += "<p>Cliquei no Botao 4</p>"
}
function getDia(){
    let dataInput = document.getElementById("dia");
    let dataAtual = new Date();
    let dia = dataAtual.getDate();
    dataInput.value = dia;
}
function exibirDataAtual(){
    let dataAtual = new Date();
    //alert(dataAtual);
    document.getElementById("dia").value = dataAtual.toLocaleDateString("pt-BR")
}

function exibirDataFormatada(){
    let dataAtual = new Date();
    let dia, mes, ano;
    dia = String(dataAtual.getDate()).padStart(2,0);
    mes = dataAtual.getMonth();
    ano = dataAtual.getFullYear();
    let data = dia +"/"+ (mes +1) +"/"+ ano;
    document.getElementById("dataFormatada").innerHTML = data;
}
function calcularDiferenca(){
    let data1 = new Date(document.getElementById("data1").value);
    let data2 = new Date(document.getElementById("data2").value);
    let diferenca = Math.abs(data1 - data2) / (1000 * 60 * 60 * 24);
    document.getElementById("diferenca").textContent = "Diferenca em dias: " + diferenca;
}

