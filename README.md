# dio-jogo-adivinhacao-pair-chatgpt

# DIO (Digital Innovation One) - Formação C/C++ Developer

## Jogo de Adivinhação em C com Pair Programming ChatGPT

### Este é um simples jogo de adivinhação em linguagem C, desenvolvido com o suporte da ferramenta ChatGPT da OpenAI.

## Como jogar

O objetivo do jogo é adivinhar um número inteiro aleatório entre 1 e 100. O jogador deve digitar um palpite e o jogo informará se o número é maior ou menor do que o palpite.
Para jogar, abra o terminal ou prompt de comando e navegue até a pasta onde o arquivo main.c está localizado. Compile o arquivo com o seguinte comando:
gcc main.c -o game

Em seguida, execute o arquivo com o seguinte comando:

./game

O jogo iniciará e pedirá que o jogador digite um palpite. O jogador deve digitar um número inteiro entre 1 e 100 e pressionar Enter.
O jogo informará se o número é maior ou menor do que o palpite do jogador. O jogador deve continuar a fazer palpites até adivinhar o número correto.
Quando o número correto é adivinhado, o jogo informará o número total de palpites feitos e pedirá que o jogador decida se deseja jogar novamente.

## Como o jogo foi desenvolvido

O jogo foi desenvolvido em linguagem C com o suporte da ferramenta ChatGPT da OpenAI. A ferramenta ChatGPT foi usada para ajudar a desenvolver a lógica do jogo e implementar a função para gerar um número aleatório.
A função para gerar um número aleatório é a seguinte:
// Função para gerar um número aleatório entre min e max (inclusivo)
int generate_random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}

A função usa a função rand() da biblioteca padrão do C para gerar um número aleatório entre 0 e RAND_MAX. Em seguida, o número é modificado e deslocado para ficar dentro do intervalo desejado.
A lógica principal do jogo é implementada na função play_game. A função começa gerando um número aleatório usando a função generate_random_number. Em seguida, o jogo pede que o jogador faça um palpite e informa se o número é maior ou menor do que o palpite.
A função play_game continua a pedir palpites até que o número correto seja adivinhado. Em seguida, o número total de palpites é informado e o jogador pode escolher se deseja jogar novamente.
A função main é responsável por iniciar o jogo e controlar o fluxo de jogo. Ela chama a função play_game e pede ao jogador que decida se deseja jogar novamente.
O jogo é bem simples e pode ser facilmente expandido com mais recursos e funcionalidades, como um limite de tempo para fazer um palpite ou uma pontuação baseada no número de palpites necessários para adivinhar o número correto.





