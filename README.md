# polling
Aplicação da técnica "polling" para contagem de acertos de determinada classificação.

A aplicação desta técnica foi utilizada no artigo abaixo, não deixe de acessar:

https://link.springer.com/chapter/10.1007/978-3-030-01421-6_12


Para execução, atente-se ao seu arquivo de dados a ser classificado, no exemplo, temos
2 arquivos de dados rotulados nas classes "1" e "2", é necessário que o seu arquivo de 
dados esteja com as respostas da classificação separadas em arquivos de acordo com a
classe da resposta certa, por exemplo:

Em nossos arquivos de exemplo, o arquivo dados1.txt contém a resposta do classificador para dados 
que possuam a resposta correta "1".

Por outro lado, o arquivo dados2.txt contém a resposta do classificador para dados 
que possuam a resposta correta "2".


Para compilar, execute um terminal:

>> gcc conta_acertos_esquerda.c -o conta_acertos_esquerda

>> gcc conta_acertos_direita.c -o conta_acertos_direita

Programa compilado e testado em:
gcc (Ubuntu 5.4.0-6ubuntu1~16.04.12) 5.4.0 20160609

Bibliotecas necessárias:
stdio
string
stdlib


Para executar, se queremos contar o números de acertos do arquivo que tem a resposta correta em "1",
devemos executar:

>> ./conta_acertos_esquerda dados1.txt

Informe o neuronio divisor (comeco da segunda classe): 2 (com duas classes, sempre será 2).

Informe o N. de amostras a ser considerado: (número de amostras para contagem de acertos por janela deslizante)
Deve ser sempre ímpar (novamente, para maiores detalhes, não deixe de acessar):
https://link.springer.com/chapter/10.1007/978-3-030-01421-6_12

Por outro lado, se queremos contar o números de acertos do arquivo que tem a resposta correta em "2",
devemos executar:

>> ./conta_acertos_direita dados2.txt
