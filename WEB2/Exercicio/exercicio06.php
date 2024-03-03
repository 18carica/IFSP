<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 6</title>
</head>
<body>
<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Números Primos de 1 a 1000</title>
</head>
<body>
    <style>
        table, th, td {
        border: 1px solid black;
        border-collapse: collapse;
        text-align: center;
        }
    </style>
    <h1>Números Primos de 1 a 1000</h1>
    <table>
        <thead>
            <tr>
                <th>Números Primos</th>
            </tr>
        </thead>
        <tbody>
            <?php
            // Função para verificar se um número é primo
            function ehPrimo($numero) {
                if ($numero <= 1) {
                    return false;
                }
                for ($i = 2; $i <= sqrt($numero); $i++) {
                    if ($numero % $i == 0) {
                        return false;
                    }
                }
                return true;
            }

            // Loop para encontrar e imprimir os números primos
            for ($i = 2; $i <= 1000; $i++) {
                if (ehPrimo($i)) {
                    echo "<tr><td>$i</td></tr>";
                }
            }
            ?>
        </tbody>
    </table>
</body>
</html>

</body>
</html>