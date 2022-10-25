<!DOCTYPE html>
<html lang="pt-BR">
<head>

    <?php
        //O isset testa se foi passado o parâmetro, caso não, ele insere o valor que pré configuramos
        $txt = isset($_GET["t"])?$_GET["t"]:"Texto Genérico";
        $tam = isset($_GET["tam"])?$_GET["tam"]:"12pt";
        $cor = isset($_GET["cor"])?$_GET["cor"]:"#000000";
    ?>
    <link rel="stylesheet" href="layout.css">
    <style>
        
        span.texto {
            font-size: <?php echo $tam; ?>; /*Pegando o tamanho selecionado pelo usuário e setando na fonte do span*/
            color: <?php echo $cor; ?>;
        }
    </style>

    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulário em PHP</title>
</head>
<body>
    <div class="container">

        <?php
            echo "<span class='texto'>$txt</span>";
        ?>
        <br>
        <a href="03exercicio.html">Voltar</a>
    </div>
</body>
</html>