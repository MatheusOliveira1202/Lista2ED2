<?php
$array = [0, 1, 8, 2, 5, 9];

	do
	{
		$swapped = false;
		for( $i = 0, $c = count( $array ) - 1; $i < $c; $i++ )
		{
			if( $array[$i] > $array[$i + 1] )
			{
				list( $array[$i + 1], $array[$i] ) =
						array( $array[$i], $array[$i + 1] );
				    $swapped = true;
			}
		}
	}
	while( $swapped );
  for( $i = 0, $c = count( $array ); $i < $c; $i++ )
  {
     print($array[$i]); 
      echo "\n";
  }


//Explicação : nesse método há duas estruturas lineares, uma dentro da outra, fazendo com que cada iteração do primmeiro conjunto de dados(array), gere uma segunda estrutura linear inteira, assim temos  O(n) x O(n) = O(n²)

?>
