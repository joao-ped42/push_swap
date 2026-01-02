*Esse projeto foi criado para ser parte do currículo da 42 por joao-ped*

# Descrição

"push_swap" é um projeto com foco em algorítimos de ordenação. O objetivo é fazer um programa que vai organizar uma lista de números em ordem crescente com o mínimo de operações (sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb) possível usando apenas duas stacks.

# Instruções

## Preparação

Eu comecei o projeto fazendo o header, o Makefile e os arquivos.c com as funções que julguei útil para criar o programa (cada grupo de funções em um arquivo.c), são elas:

1. Funções para tratar quando os números vêm numa string só:
	- ft_count_numbers: Conta quantos números tem na string;
	- ft_substr: Criar uma string menor com base numa string maior (serve apenas para auxiliar a split)
	- ft_split: Vai criar uma array de string apenas com números;
	- ft_free_all: Para dar free na array depois que não for mais necessária;
2. Funções para a conversão dos números da string pra int:
	- ft_conversion: Faz a conversão da string e avisando caso haja algum erro (serve apenas para auxiliar a atoi);
	- ft_atoi: Trata a string com condições específicas para esse projeto para determinar o que é considerado número ou não (também avisa caso haja um erro);
	- ft_aatoii: Vai retornar um array com os números inseridos no programa, mas dessa vez como int, e essa será a stack;
	- ft_duplicated: Verifica se tem algum número repetido na stack;
3. Funções que realizam as operações ditas no subject;

Com tudo isso pronto, eu parti para fazer os algorítimos de ordenação em si,

# Recursos

A inteligência artificial me ajudou bastante em momentos que estive estagnado na lógica e não sabia mais o que fazer, além de me explicar conceitos de ordenação.