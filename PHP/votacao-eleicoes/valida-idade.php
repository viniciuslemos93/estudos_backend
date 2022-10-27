<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <link rel="stylesheet" href="layout.css">

    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Validador de Idade</title>
</head>
<body>
    <div class="container">
        <?php
        //Exercício para praticar a estrutura If em PHP

        $a = isset($_GET["ano"])?$_GET["ano"]:"[Ano não informado!]"; //Testando se foi passado o parâmetro
        $nome = isset($_GET["nome"])?$_GET["nome"]:"[nome não informado!]"; //Testando se foi passado o parâmetro
        $i = date("Y") - $a; //a função date("Y") traz o ano com 4 dígitos ex: 2022 e date("y") com dois dígitos ex: 22
        echo "<strong>$nome</strong> nasceu em $a e tem <strong>$i</strong> anos<br>";

        if ($i <= 0) {
            echo "[Opção Inválida] Digita uma data de nascimento válida";
        }elseif ($i < 16) {
            $v = "Não Pode Votar";            
        }elseif (($i >= 16 && $i < 18) || ($i > 65)) {
            $v = "O Voto é <strong>Opcional</strong>";
        }elseif ($i >= 18 && $i <= 65) {
            $v = "O Voto é <strong>Obrigatório</strong>";            
        }

        echo "Com esta idade $v";

        ?>
        <br>
        <a href="index.html">Voltar</a>
    </div>
</body>
</html>