<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <link rel="stylesheet" href="estilo.css">

    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>
<body>
    <section class="container">
    
    <?php
    //Array para liberação do acesso
    $acesso[] = "vinicius";
    $acesso[] = "102030";
    //Inserindo dados no array de login
    $dados[] = $_POST["nome"];
    $dados[] = $_POST["login"];
    $dados[] = $_POST["senha"];

    if ($dados[1] == $acesso[0] && $dados[2] == $acesso[1]) {
        echo "<h1>Login realizado </h1>";
    }else
        echo "<h1>Login Inválido</h1>";

    //echo "<strong>$dados[0]</strong>$dados[1]<strong>$dados[2]</strong>";

    
    ?>

    <a href="index.html">Voltar</a>
    </section>
</body>
</html>