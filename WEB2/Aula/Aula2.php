<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 2 Preparação do ambiente e introdução ao PHP</title>
</head>
<body>
    <?php
        $nome = "João";
        $idade = 25;
    ?>
    <?php
        echo "Olá, Mundo!";
    ?>
    <?php
        if ($idade >= 18) {
            echo "Você é maior de idade.";
        } else {
            echo "Você é menor de idade.";
        }
    ?>
    <?php
        function soma($a, $b) {
            return $a + $b;
        }
        
        echo soma(5, 3); // Saída: 8
    ?>
    <?php
        // Array indexado
        $frutas = array("Maçã", "Banana", "Laranja");

        // Array associativo
        $pessoa = array("nome" => "Ana", "idade" => 25);
    ?>
    <?php
        $nome = "Pedro";
        $idade = 22;

        echo "Olá, $nome! Você tem $idade anos.";
    ?>
</body>
</html>