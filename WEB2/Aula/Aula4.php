<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aula 4 - PHP - Conceitos Básicos (Variáveis, Tipos de Dados, Operadores e Expressões; Blocos de decisão e loops)</title>
</head>
<body>
    <?php
        $x = 50;
        $y = 2.55;
        $soma = (int) $y + $x;
        echo $soma;
    ?>
    <br>
    <?php
        $x = 4;      //100
        $y = 3;      //011
        $x >>= $y;   //010
        echo $x;
    ?>
    <br>
    <?php
        $x = 4;      //100
        $y = 3;      //011
        $x <<= $y;   //100000
        echo $x;
    ?>
    <br>
    <?php
        $a = null;
        $b = 0;
        $a = $a ?? $b; #se $a for nulo, aatribui o valor de $b
        // $a passa a ter o valor de 0
        echo $a;
    ?>
    <br>
    <?php
        if ($a == 5):
            echo "a equals 5";
            echo "...";
        elseif ($a ==6):
            echo "a equals 6";
            echo "!!!";
        else:
            echo "a is neither 5 or 6";
        endif;
    ?>
    <?php
        $i = 0;
        do {
            echo "<p>$i</p>";
        } while ($i > 0);
    ?>
</body>
</html>