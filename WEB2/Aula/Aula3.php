<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 3 PHP Básico</title>
</head>
    <body>
        <?php
        $data_de_hoje = date("d/M/Y",time());
        ?>
        <p aligh="center">Hoje é dia <?php echo $data_de_hoje;?></p>
    </body>
</html>