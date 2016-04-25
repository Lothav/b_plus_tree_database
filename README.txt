Esta pasta contém 6 testes toy. Os arquivos nomeados testN.txt foram feitos
de acordo com a sintaxe das operações usando apenas um índice. Os arquivos
testN_multiple.txt foram feitos de acordo com a sintaxe usando múltiplos 
índices, apesar de apenas um índice ser passado como parâmetro. Com exceção 
das sintaxes das operações, os testes são idênticos. 

É importante observar que as respostas não são únicas no caso da operação 
"dump", dependerá da implementação da árvore. Serão consideradas corretas 
as implementações que respeitem a ordenação das chaves, que mantenham 
as folhas na mesma altura e que respeitem a ordem da árvore, ou seja, todos 
os nós devem ter no máximo m chaves, e todos os nós exceto a raiz devem ter 
no mínimo (teto(m/2) - 1) chaves.

Para testar o seu programa, use as linhas de comando abaixo:

./tp1.exe test1_myanswer.txt test1.txt 4 5 0 
./tp1.exe test2_myanswer.txt test2.txt 5 10 0 
./tp1.exe test3_myanswer.txt test3.txt 4 3 0 
./tp1.exe test4_myanswer.txt test4.txt 6 3 0 
./tp1.exe test5_myanswer.txt test5.txt 4 3 0 
./tp1.exe test6_myanswer.txt test6.txt 7 3 0 

ou

./tp1.exe test1_myanswer.txt test1_multiple.txt 4 5 0 
./tp1.exe test2_myanswer.txt test2_multiple.txt 5 10 0 
./tp1.exe test3_myanswer.txt test3_multiple.txt 4 3 0 
./tp1.exe test4_myanswer.txt test4_multiple.txt 6 3 0 
./tp1.exe test5_myanswer.txt test5_multiple.txt 4 3 0 
./tp1.exe test6_myanswer.txt test6_multiple.txt 7 3 0 

