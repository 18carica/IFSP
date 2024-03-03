<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 15</title>
</head>
<body> 
    <h3>Exercício 15</h3>
    <?php
        //Exercício 15: Calcular a média de um conjunto de números capturados de uma coluna em um arquivo CSV.

        // Caminho para o arquivo CSV
        $arquivoCSV = 'dados.csv';

        // Função para calcular a média de uma coluna em um arquivo CSV
        function calcularMediaCSV($caminhoArquivo, $coluna) {
            // Verifica se o arquivo existe
            if (!file_exists($caminhoArquivo)) {
                return false; // Retorna false em caso de erro
            }
        
            // Inicializa um array para armazenar os valores da coluna
            $valoresColuna = array();
        
            // Abre o arquivo CSV para leitura
            if (($handle = fopen($caminhoArquivo, 'r')) !== FALSE) {
                // Itera sobre cada linha do arquivo CSV
                while (($data = fgetcsv($handle, 1000, ',')) !== FALSE) {
                    // Verifica se a linha possui a coluna desejada
                    if (isset($data[$coluna])) {
                        // Adiciona o valor da coluna ao array de valores
                        $valoresColuna[] = $data[$coluna];
                    }
                }
                fclose($handle); // Fecha o arquivo CSV
            }
        
            // Verifica se foram encontrados valores na coluna
            if (empty($valoresColuna)) {
                return false; // Retorna false em caso de erro
            }
        
            // Calcula a média dos valores da coluna
            $media = array_sum(array_map('intval', $valoresColuna)) / count($valoresColuna);

        
            return $media;
        }

        // Calcula a média da coluna "Idade" do arquivo CSV
        $mediaIdade = calcularMediaCSV($arquivoCSV, 1);

        if ($mediaIdade !== false) {
            echo "A média das idades é: " . $mediaIdade;
        } else {
            echo "Erro ao calcular a média das idades.";
        }
    ?>
</body>
</html>