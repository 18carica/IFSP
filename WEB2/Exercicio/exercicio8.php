<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 8</title>
</head>
<body>

//Exercício 8: Crie uma função que imprima “Neste dia tem aula de DW2”/ “Neste dia não tem aula de DW2” com base no dia da semana em formato string informado como parâmetro.
    
    <h3>Exercício 8</h3>
    <?php
    function verificarAulaDW2($diaSemana) {
        // Converter para minúsculas para garantir que a comparação não seja sensível a maiúsculas
        $diaSemana = strtolower($diaSemana);

        // Array associativo que mapeia o dia da semana para se há aula de DW2 ou não
        $aulasDW2 = array(
            "segunda-feira" => "Neste dia não tem aula de DW2",
            "terça-feira" => "Neste dia tem aula de DW2",
            "quarta-feira" => "Neste dia não tem aula de DW2",
            "quinta-feira" => "Neste dia tem aula de DW2",
            "sexta-feira" => "Neste dia não tem aula de DW2",
            "sábado" => "Neste dia não tem aula de DW2",
            "domingo" => "Neste dia não tem aula de DW2"
        );

        // Verificar se o dia informado está no array
        if (array_key_exists($diaSemana, $aulasDW2)) {
            echo $aulasDW2[$diaSemana]; // Imprimir se há aula de DW2 ou não
        } else {
            echo "Dia da semana inválido."; // Caso o dia informado não seja reconhecido
        }
    }

    // Exemplos de uso da função
    verificarAulaDW2("segunda-feira");
    echo "<br>";
    verificarAulaDW2("quarta-feira");
    echo "<br>";
    verificarAulaDW2("sábado");
    echo "<br>";
    verificarAulaDW2("terça-feira");
    echo "<br>";
    verificarAulaDW2("segunda");
    echo "<br>";
?>
</body>
</html>