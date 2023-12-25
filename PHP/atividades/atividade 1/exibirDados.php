<?php
$nome = $_GET['nome'];
$idade = $_GET['idade'];
?>

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Atividade 1</title>
</head>
<body>
    <?php
    echo '<h1>Olá '.$nome.'! Você tem '.$idade.' anos.</h1>';
    ?>
</body>
</html>