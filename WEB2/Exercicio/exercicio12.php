<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 12</title>
</head>
<body> 
    <h3>Exercício 12</h3>
    <?php
        //Exercício 12: Encontrar o maior elemento em um array.
        function encontrarMaiorElemento($array) {
            // Verifica se o array está vazio
            if (empty($array)) {
                return "O array está vazio";
            }
        
            // Inicializa a variável $maiorElemento com o primeiro elemento do array
            $maiorElemento = $array[0];
        
            // Percorre o array para encontrar o maior elemento
            foreach ($array as $elemento) {
                if ($elemento > $maiorElemento) {
                    $maiorElemento = $elemento;
                }
            }
        
            return $maiorElemento;
        }
        
        // Exemplo de uso da função
        $array = array(10, 5, 20, 15, 30);
        echo "O maior elemento no array é: " . encontrarMaiorElemento($array);
        
        ?>
</body>
</html>