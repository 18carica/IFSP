<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 10</title>
</head>
<body>    
    <h3>Exercício 10</h3>
    <?php
        //Exercício 10: Simule a ausência do arquivo com include e require e inclua abaixo o retorno do servidor para ambas as situações.
        echo "<h4>include</h4>";
        include 'qualquerArquivo.php';
        echo "<h4>require</h4>";
        require 'qualquerArquivo.php';
    ?>
</body>
</html>