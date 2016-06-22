#My Grammar

###Ideias Iniciais

      Inserção de dados equivale a 
      Saída de dados equivale a 
      Operadores equivale a +, -, /, *, %
      Variáveis equivale a...z e A..Z
      String equivale a 
      Atribuição de valores as variáveis equivale a  

###Gramática BNF
      <grammar> ::= <cmd> | <cmd>EOL<grammar>
      <cmd> ::= <at> | <esc> | <leia>
      <esc> ::= escreva <texto>
      <texto> ::= str | var | <expr>
      <expr> ::= num | <expr><op><expr> | pa<expr>pf | <vars>
      <op> ::= soma | div | mult | resto
      <leia> ::= leia <vars>
      <vars> ::= var | var sep<vars>
      <at> ::= var rec <val>
      <val> ::= num | var | <expr>
   
###Tokens
   
   
   
