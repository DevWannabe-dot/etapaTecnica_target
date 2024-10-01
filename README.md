# desafio_target
## Instruções para build
### Windows
`$ gcc main.c -omain`<br>
`$ main.exe`<br>
### Linux/Unix
`$ gcc main.c -omain`<br>
`$ ./main`<br>
<hr>
1) Observe o trecho de código abaixo: <br><br>

```
 	int INDICE = 13, SOMA = 0, K = 0; 

 	enquanto K < INDICE faça 

	{ 

		K = K + 1; 

		SOMA = SOMA + K; 

	} 

 	imprimir(SOMA); 
```
Ao final do processamento, qual será o valor da variável SOMA?<br>
&nbsp;&nbsp;&nbsp;&nbsp;**91.**
<br><br>
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
### [Código: Fibonacci](2.h)
<br>
3) Descubra a lógica e complete o próximo elemento:

&nbsp;&nbsp;&nbsp;&nbsp;a) **9**<br>
&nbsp;&nbsp;&nbsp;&nbsp;b) **128**<br>
&nbsp;&nbsp;&nbsp;&nbsp;c) **49**<br>
&nbsp;&nbsp;&nbsp;&nbsp;d) **100**<br>
&nbsp;&nbsp;&nbsp;&nbsp;e) **13**<br>
&nbsp;&nbsp;&nbsp;&nbsp;f) **200**<br>
<br>
4) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em uma sala diferente. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada.
<br><br>
Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?<br>
&nbsp;&nbsp;&nbsp;&nbsp;**Ligaria o interruptor 1 e, após 10 minutos, o desligaria, para então ligar o interruptor 2. Iria até uma das salas e, caso estivesse acesa, associaria a lâmpada ao interruptor 1. Se estivesse apagada, porém quente, associaria a lâmpada ao interruptor 2, senão ao interruptor 3. Sem voltar para a sala dos interruptores, visitaria outra sala para descobrir o próximo interruptor, partindo do mesmo princípio. Restaria, então, apenas um interruptor, que obrigatoriamente controla a lâmpada restante.**
<br><br>
5) Escreva um programa que inverta os caracteres de um string.
### [Código: Inversor de Strings](5.h)
