<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 13</title>
</head>
<body> 
    <h3>Exercício 13</h3>
    <?php
        //Exercício 13: Ordenar um array de números em ordem crescente.
        function ordenarArrayCrescente($array) {
            // Verifica se o array está vazio
            if (empty($array)) {
                return "O array está vazio";
            }
        
            // Ordena o array em ordem crescente
            sort($array);
        
            return $array;
        }
        
        // Exemplo de uso da função
        $array = array(10, 5, 20, 15, 30);
        echo "Array original: " . implode(", ", $array) . "<br>";
        $arrayOrdenado = ordenarArrayCrescente($array);
        echo "Array ordenado em ordem crescente: " . implode(", ", $arrayOrdenado);
        
        ?>
</body>
</html>