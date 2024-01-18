# Jogo da advinhação 🎲

Olá tudo bem?

Com base nos estudos da linguagem C, desenvolvi esse jogo de advinhação onde algoritmo gera um número entre 1 e 100 e o usuário deverá acertar qual o número foi gerado em 5 tentativas.

# Regras

* São 5 tentativas
* Se o palpite for menor que número gerado a mensagem ```Seu palpite é menor que o número``` é demonstrado. 
* Se o palpite for maior que número gerado a mensagem ```Seu palpite é maior que o número``` é demonstrado. 
* O palpite do usuário não pode ser menor ou igual a zero
* Quando o palpite for inválido a jogada será anulada
* Se o usuário acertar em 5 tentativas será emitida a mensagem ```Parabens! Voce acertou!```
* Ao final do jogo será demonstrado qual é o número secreto, e será perguntado ao usuário se deseja jogar novamente.


# Jogo
```
************************************
* BEM VINDO AO JOGO DE ADIVINHACAO *
************************************
* Nesse jogo eu vou pensar em um   *
* numero e voce deve adivinhar     *
************************************

Voce tem X tentativas:
Qual seu palpite?
X
Seu palpite e maior que o numero!

Voce tem X tentativas:
Qual seu palpite?
X
Seu palpite e menor que o numero!

Voce tem X tentativas:
Qual seu palpite?
X
Seu palpite deve ser maior que zero!

Voce tem X tentativas:
Qual seu palpite?
X
Parabens! Voce acertou!


Numero secreto e: X
************************************
*            FIM DE JOGO           *
************************************
Deseja jogar novamente? (0-Nao 1-Sim)
```
