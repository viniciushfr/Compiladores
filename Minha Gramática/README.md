#Minha Gramática

###Ideias Iniciais

      Inserção de dados equivale a leia
      Saída de dados equivale a escreva
      Operadores equivale a +, -, /, *, %
      Variáveis equivale a...z e A..Z
      String equivale a str
      Atribuição de valores as variáveis equivale a rec

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
|    Tokens   |                   Lexema                  |             Padrão             |     Atributo     |
|-------------|-------------------------------------------|--------------------------------|------------------|
|   escreva   |                  escreva                  |             escreva            |         -        |
|    leia     |                   leia                    |               leia             |         -        |
|     eol     |                    \n                     |               \n               |         -        |
|     sep     |                     ,                     |               ,                |         -        |
|     str     |                   Texto                   |             "(.?)*"            |         -        |
|     num     |             0 1 2 3 4 5 6 7 8 9.5         |         [0-9]+ (\.[0-9]+)?     |         -        |
|     var     |                     var                   |        [a-zA-Z][a-zA-Z0-9]*    |         -        |
|     soma    |                      +                    |                +               |         -        |
|     div     |                      /                    |                /               |         -        |
|     mult    |                      *                    |                *               |         -        |
|     resto   |                      %                    |                %               |         -        |
|      pa     |                     (                     |                (               |         -        |
|      pf     |                     )                     |                )               |         -        |
|      rec    |                     =                     |                =               |         -        |
   
