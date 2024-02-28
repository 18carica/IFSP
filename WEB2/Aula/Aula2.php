<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 2 Preparação do ambiente e introdução ao PHP</title>
</head>
<body>
    <h3>Exemplo 1</h3>
        <?php
            $nome = "João";
            $idade = 25;
        ?>
    <h3>Exemplo 2</h3>
        <?php
            echo "Olá, Mundo!";
        ?>
    <h3>Exemplo 3</h3>
        <?php
            if ($idade >= 18) {
                echo "Você é maior de idade.";
            } else {
                echo "Você é menor de idade.";
            }
        ?>
    <h3>Exemplo 4</h3>
        <?php
            function soma($a, $b) {
                return $a + $b;
            }
            
            echo soma(5, 3); // Saída: 8
        ?>
    <h3>Exemplo 5</h3>
        <?php
            // Array indexado
            $frutas = array("Maçã", "Banana", "Laranja");

            // Array associativo
            $pessoa = array("nome" => "Ana", "idade" => 25);
        ?>
    <h3>Exemplo 6</h3>
        <?php
            $nome = "Pedro";
            $idade = 22;

            echo "Olá, $nome! Você tem $idade anos.";
        ?>
</body>
</html>