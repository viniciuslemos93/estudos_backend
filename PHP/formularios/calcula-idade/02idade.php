<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <style>
        body {
            background: rgba(57, 139, 216, 0.63);
            font-size: 1.3em;
            text-align: center;
        }
        .container {
            border: 5px solid white;
            
            text-align: center;
            font-size: 1.5em;
            color: white;
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
        
        $nome = isset($_GET["nome"])?$_GET["nome"]:"[Nome não informado]"; //Testando se foi passado o parâmetro
        $ano_nasc = isset($_GET["ano"])?$_GET["ano"]:0;//Testando se foi passado o parâmetro
        $sexo = isset($_GET["sexo"])?$_GET["sexo"]:"[Sem sexo]";//Testando se foi passado o parâmetro
        //a função date("Y") traz o ano com 4 dígitos ex: 2022 e date("y") com dois dígitos ex: 22
        $idade = date("Y") - $ano_nasc;
        echo "$nome é $sexo e tem $idade anos";

        ?>
        <br>
        <a href="02exercicio-calculo_idade.html">Voltar</a>
    </div>
</body>
</html>