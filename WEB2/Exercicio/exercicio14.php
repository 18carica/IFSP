<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 1142</title>
</head>
<body> 
    <h3>Exercício 14</h3>
    <?php
        //Exercício 14: Encontrar o elemento mais comum dentro de um array.

        function encontrarElementoMaisComum($array) {
            // Verifica se o array está vazio
            if (empty($array)) {
                return "O array está vazio";
            }
        
            // Conta a ocorrência de cada elemento no array
            $contagemElementos = array_count_values($array);
        
            // Inicializa as variáveis para o elemento mais comum e sua contagem
            $elementoMaisComum = null;
            $contagemMaisAlta = 0;
        
            // Percorre o array de contagem para encontrar o elemento mais comum
            foreach ($contagemElementos as $elemento => $contagem) {
                if ($contagem > $contagemMaisAlta) {
                    $elementoMaisComum = $elemento;
                    $contagemMaisAlta = $contagem;
                }
            }
        
            return $elementoMaisComum;
        }
        
        // Exemplo de uso da função
        $array = array(10, 5, 20, 10, 15, 30, 10, 20, 10);
        echo "Array original: " . implode(", ", $array) . "<br>";
        echo "O elemento mais comum no array é: " . encontrarElementoMaisComum($array);
        
        ?>
</body>
</html>