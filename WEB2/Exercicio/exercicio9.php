<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 9</title>
</head>
<body>

//Exercício 9: Coloque a função desenvolvida no exercício anterior em um arquivo separado e utilize outro arquivo para executar a função a partir do arquivo referenciado.
    
    <h3>Exercício 9</h3>
    <?php

function verificarAulaDW2($diaSemana) {
    // Converter para minúsculas para garantir que a comparação não seja sensível a maiúsculas
    $diaSemana = strtolower($diaSemana);

    // Array associativo que mapeia o dia da semana para se há aula de DW2 ou não
    $aulasDW2 = array(
        "segunda-feira" => "Neste dia tem aula de DW2",
        "terça-feira" => "Neste dia tem aula de DW2",
        "quarta-feira" => "Neste dia não tem aula de DW2",
        "quinta-feira" => "Neste dia tem aula de DW2",
        "sexta-feira" => "Neste dia não tem aula de DW2",
        "sábado" => "Neste dia não tem aula de DW2",
        "domingo" => "Neste dia não tem aula de DW2"
    );

    // Verificar se o dia informado está no array
    if (array_key_exists($diaSemana, $aulasDW2)) {
        return $aulasDW2[$diaSemana]; // Retorna a mensagem correspondente
    } else {
        return "Dia da semana inválido."; // Caso o dia informado não seja reconhecido
    }
}

?>

</body>
</html>