<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 2</title>
</head>
<body>
    <?php
        // Executa o comando systeminfo e captura a saída
        $output = shell_exec('systeminfo');

        // Imprime as informações na tela
        echo "<pre>$output</pre>";
    ?>
</body>
</html>