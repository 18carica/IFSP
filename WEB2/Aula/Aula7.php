<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 7 - Funções pré-definidas</title>
</head>
<body>
    <h3>Exemplo 01 - str_replace</h3>
    <?php
        $teste = str_replace("Seg", "S", "Segunda-Feira");
        echo ($teste);
    ?>
    <h3>Exemplo 02 - substr</h3>
    <?php
        echo substr("abcdef", 2,3);       // returns "cde"  -> returns apartir da segunda letra com limite de 3  
        
        echo substr("abcdef", -1);       // returns "f"     -> returns a ultima letra

        echo substr("abcdef", -2);       // returns "ef"    -> returns as 2 ultima letra

        echo substr("abcdef", -3, 1);    // returns "d"     -> returns 3 e volta 1 
    ?>
    <h3>Exemplo 03 - strpos</h3>
    <?php
        echo strpos("Vyttor", "t", 3);  // returns 3     -> returns a posição da letra procurada ($findMe)
    ?>
    <h3>Exemplo 04 - strlen</h3>
    <?php
        echo strlen("Vyttor", );  // returns 3     -> returns a posição da letra procurada ($findMe))
    ?>
    <h3>Exemplo 05 - trim</h3>
    <?php
        echo trim("Vyttor", );  // returns 3     -> returns a posição da letra procurada ($findMe))
        echo ltrim("Vyttor", ); // returns 3     -> returns a posição da letra procurada ($findMe))
        echo rtrim("Vyttor", ); // returns 3     -> returns a posição da letra procurada ($findMe))
    ?>
    <h3>Exemplo 06 - str_repeat</h3>
    <?php
        
    ?>
    <h3>Exemplo 07 - strtoupper</h3>
    <?php
        
    ?>
    <h3>Exemplo 08 - strtolower</h3>
    <?php
        
    ?>
    <h3>Exemplo 09 - </h3>
    <?php
        
    ?>
    <h3>Exemplo 10 - </h3>
    <?php
        
    ?>
    <h3>Exemplo 11 - mktime</h3>
    <?php
        
    ?>
    <h2>Manipulação de arquivos</h2>
    <h3>Exemplo 12 - file-exist</h3>
    <?php
        
    ?>
    <h3>Exemplo 13 - fopen</h3>
    <?php
        
    ?>
    <h3>Exemplo 14 - fclose</h3>
    <?php
        
    ?>
    <h3>Exemplo 15 - fwrite</h3>
    <?php
        
    ?>
    <h3>Exemplo 16 - fread</h3>
    <?php
        
    ?>
    <h2>Array - Sintaxe</h2>
    <h3>Exemplo 17 - </h3>
    <?php
        
    ?>
    <h3>Exemplo 18 - </h3>
    <?php
        
    ?>
    <h3>Exemplo 19 - </h3>
    <?php
        
    ?>
    <h3>Exemplo 20 - </h3>
    <?php
        
    ?>
</body>
</html>