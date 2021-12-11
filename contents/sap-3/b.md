# Belas Luzes

Por Gabriel Morete, Universidade de São Paulo BR Brazil
Timelimit: 1

Todos sabem que NLogonia é a cidade mais bonita do NP-País. A fama da cidade é tão lendária que pessoas dos mais diversos lugares visitam o local todos os anos. A cidade deve sua beleza ao zelo dos seus cidadãos e por uma atuação excepcional da SAP (Secretária de Assuntos Paisagísticos), o órgão responsável pela identidade visual da cidade.

O letreiro principal da cidade fica no alto de um morro e exibe o seu nome, que por sinal é o letreiro mais bonito do mundo. Vale ressaltar que essa tendência foi copiada por outras cidades, como Los Angeles, que fez o mesmo em seu bairro Hollywood. Você pode pensar que isso é um problema, mas o cidadãos de NLogonia se sentem felizes em lançar tendências.

Já fazem alguns anos que a cidade reformou todos seus letreiros, e todos sabemos que, com o tempo, lâmpadas acabam queimando. O letreiro principal da cidade é iluminado por uma sequência de lâmpadas. Os cidadãos de NLogonia não gostam quando há várias luzes queimadas entre luzes acesas. Uma iluminação é dita bonita se consiste de um prefixo (potencialmente vazio) de luzes apagadas, uma sequência (potencialmente vazia) de luzes acesas e um sufixo (potencialmente vazio) de luzes apagadas. Por exemplo, se representarmos a iluminação do letreiro por uma string binária, tal que, um bit '0' representa uma lâmpada apagada e um bit '1' representa uma lâmpada ligada temos que as iluminações '00011100', '0000111' e '11111', são bonitas e as iluminações '1110011', '101010' e '000111001', não são.

Devido a problemas de abastecimento a cidade está sem lâmpadas novas! Contudo, os cidadãos não suportam ver seu maior símbolo em tal estado. Você se compadeceu da situação e decidiu ajudar. Dada uma string binária que representa a iluminação do letreiro principal de NLogonia, imprima o número mínimo de lâmpadas que devem ser apagadas para que o letreiro fique bonito.

## Entrada

A única linha da entrada contém uma string binária s (1≤|s|≤103), o estado atual iluminação do letreiro principal.

## Saída

Um inteiro, o número mínimo de lâmpadas que devem ser apagadas para que a iluminação do letreiro fique bonita.

Exemplos de Entrada | Exemplos de Saída
:-----------------: | :-----------------:
001100110 | 2
11111 | 0
