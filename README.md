#Minha Gramática

###Ideias Iniciais

      Inserção de dados equivale a leia
      Saída de dados equivale a escreva
      Operadores equivale a +, -, /, *, %
      Variáveis equivale a...z e A..Z
      String equivale a 
      Atribuição de valores as variáveis equivale a  

###Gramática BNF
      <gr> ::= <cmd> | <cmd>eol<gr>
      <cmd> ::= <at> | <esc> | <leia>
      <esc> ::= escreva <texto>
      <texto> ::= str | var | <expr>
      <expr> ::= num | <expr><op><expr> | pa<expr>pf | var
      <op> ::= soma | div | mult | resto
      <leia> ::= leia <vars>
      <vars> ::= var | var sep<vars>
      <at> ::= var rec <val>
      <val> ::= num | var | <expr>
   
###Tokens
|    Tokens   |                   Padrão                  |            Atributo            |
|-------------|-------------------------------------------|--------------------------------|
|   escreva   |                  escreva                  |               -                |
|    leia     |                   leia                    |               -                |
|     eol     |                    \n                     |               -                |
|     sep     |                     ,                     |               -                |
|     str     |                   Texto                   |            [a-zA-Z]+           |
   
