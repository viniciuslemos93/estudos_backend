<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">

    <title>Operadores e Funções Aritméticas</title>
</head>
<body>
    <main>
    <?php
        $v1 = $_GET[a]; //$_GET[nome_variável] este parâmetro pega um valor inserido na url do browser.
        $v2 = $_GET[b]; //Exemplo de passagem: http://localhost/operadores/operadores.php?a=30&b=25        
        
        echo "<h1>Operadores Aritméticos</h1>";
        echo "<h2>Valores recebidos: $v1 e $v2</h2>";

        
        echo "{$v1} + {$v2} = ".($v1 + $v2);
        echo "<br>{$v1} - {$v2} = ".($v1 - $v2);
        echo "<br>{$v1} x {$v2} = ".($v1 + $v2);
        echo "<br>A média entre {$v1} e {$v2} = ".($v1 + $v2)/2;
        
        echo "<h1>Funções Aritméticas</h1>";
        echo "{$v1} + {$v2} = ".($v1 + $v2);
        echo "<br>O valor absoluto de {$v2} é " . abs($v2);
        echo "<br>O valor de {$v1}<sup>{$v2}</sup> é " . pow($v1, $v2);
        echo "<br>A <strong>Raíz</strong> de {$v1} é " . sqrt($v1);
        echo "<br>O valor de {$v2} <strong>arredondado</strong> é " . round($v2);
        echo "<br>A <strong>parte inteira</strong> de {$v2} é " . intval($v2);
        echo "<br>O valor de {$v2} <strong>em moeda</strong> é R$" . number_format($v2,2,",","."); //number_format($Variável,casas_decimais,"separador_decimal","separador_de_milhar")
    ?>
    </main>
</body>
</html>