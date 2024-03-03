<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 1</title>
</head>
<body>
    <h1>
        <?php
        // Defina o raio do círculo
        $raio = 5; // Por exemplo, o raio é 5

        // Calcule o perímetro do círculo
        $perimetro = 2 * M_PI * $raio;

        // Calcule a área do círculo
        $area = M_PI * pow($raio, 2);

        // Exiba o perímetro e a área do círculo em linhas diferentes
        echo "<p>O perímetro do círculo é $perimetro \n</p>";
        echo "<p>A área do círculo é $area \n</p>";
        ?>
    </h1>
</body>
</html>