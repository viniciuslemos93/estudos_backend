<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tema 02 | Programação Web</title>
</head>
<body>
    <?php
    echo "Olá, primeiros contatos com o PHP :)"."<hr>";
    
    $vet = array();
    /*
    $vet[]=40;
    $vet[]=60;
    $vet[]=90;
    $vet[]=120;
    $vet["teste"]="Ola"; //No PHP, os vetores podem ser indexados por String. Cada posição do Array pode ter números, Strings ou outro Array.
    $vet["nome"][0]="Vinicius Lemos";
    $vet["nome"][1]="Fabrício Dourado";
    $vet["nome"][2]["primeiro"]="Ciclano";//Aqui temos um Array dentro de Array dentro de Array.
    $vet["nome"][2]["idade"]=33;
    */
    
    $texto="2345, Vinicius Lemos, 28, teste, 345.544";
    $dados = explode(",", $texto); //Esta função pega a String, usando a vírgula(como campo separador), e transformará em um Array.
    $dados["ola"]="Outro teste";
    $dados["nome"][0]="Vinicius";
    $dados["nome"][1]="Mário";
    
    //A Tag <pre> não está mais em conformidade com o W3C, usamos apenas para fins didáticos.
    echo "<pre>";
    print_r($dados);
    echo "</pre>";
    //Varrendo o array Dados com o For
    /*for ($i = 0; $i < sizeof($dados); $i++) { //o Sizeof retorna a quantidade de elementos - Funciona apenas para Vetores de apenas uma Dimensão.
        //Mostrando as formas que podemos exibir os Arrays.
        //echo "Dados[$i] = $dados[$i]<br>"; //Isto não funciona, pois dentro das aspas não podemos usar uma variável indexadas - arrays.
        echo "Dados[$i] = {$dados[$i]}<br>"; //Podemos usar tudo dentro das aspas, porém usando chaves {}.
        //echo "Dados[$i] = ".$dados[$i]."<br>"; //Ou podemos também fazer assim.
    }*/
    //Varrendo o array Dados com o Foreach (o mais indicado para varrer)
    foreach ($dados as $k => $d) { //Este Foreach pega também o índica/chave do array. a cada passagem, a variável $k recebe o índice e a variável $d recebe o conteúdo.
        if (is_array($d)) {
            echo "Dados[$k] = <br>";
            foreach ($d as $k1 => $d1) {
                echo " &nbsp; &nbsp; &nbsp;[$k1]=[$d1]<br>";
            }
        }else {
            echo "Dados - Posição=>[$k] = $d<br>";
        }
    }
    
    ?>
</body>
</html>