<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio 5</title>
</head>
<body>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Números de 1 a 1000</title>
</head>
<body>
<style>
table, th, td {
  border: 1px solid black;
  border-collapse: collapse;
  text-align: center;
}
</style>
    <h1>Números de 1 a 1000</h1>
    <table>
        <thead>
            <tr>
                <th>Número</th>
            </tr>
        </thead>
        <tbody>
            <?php
            $soma = 0;
            for ($i = 1; $i <= 1000; $i++) {
                echo "<tr><td>$i</td></tr>";
                $soma += $i;
            }
            ?>
        </tbody>
        <tfoot>
            <tr>
                <td colspan="1">A soma dos números impressos é <?php echo $soma; ?></td>
            </tr>
        </tfoot>
    </table>
</body>
</html>

</body>
</html>