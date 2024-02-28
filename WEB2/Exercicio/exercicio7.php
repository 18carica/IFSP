<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 7</title>
</head>
<body>
    <style>
            table, th, td {
            border: 1px solid black;
            border-collapse: collapse;
            text-align: center;
            }
    </style>
<h1>Série de Fibonacci até 300</h1>
    <table>
        <thead>
            <tr>
                <th>Números da Série de Fibonacci</th>
            </tr>
        </thead>
        <tbody>
            <?php
            // Inicializamos os primeiros dois números da série de Fibonacci
            $fibonacci_1 = 0;
            $fibonacci_2 = 1;

            // Imprimimos os dois primeiros números
            echo "<tr><td>$fibonacci_1</td></tr>";
            echo "<tr><td>$fibonacci_2</td></tr>";

            // Calculamos e imprimimos os números seguintes da série até atingir 300
            while ($fibonacci_1 + $fibonacci_2 <= 300) {
                $fibonacci_proximo = $fibonacci_1 + $fibonacci_2;
                echo "<tr><td>$fibonacci_proximo</td></tr>";
                $fibonacci_1 = $fibonacci_2;
                $fibonacci_2 = $fibonacci_proximo;
            }
            ?>
        </tbody>
    </table>
</body>
</html>