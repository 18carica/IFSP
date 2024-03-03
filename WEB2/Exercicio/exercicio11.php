<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 11</title>
</head>
<body> 
    <h3>Exercício 11</h3>
    <?php
        //Exercício 11: Crie uma função que imprima “Dia de semana”/ “Final de semana” com base em uma variável global diaDaSemana criada fora da função.
        
        // Variável global diaDaSemana
        $diaDaSemana = "sábado";

        // Função para imprimir "Dia de semana" ou "Final de semana" com base no valor da variável global
        function verificarDiaSemana() {
            global $diaDaSemana;

            // Verificar se o dia da semana é sábado ou domingo
            if ($diaDaSemana == "sábado" || $diaDaSemana == "domingo") {
                echo "Final de semana";
            } else {
                echo "Dia de semana";
            }
        }

        // Chamando a função
        verificarDiaSemana();
    ?>
</body>
</html>