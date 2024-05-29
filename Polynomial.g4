grammar Polynomial;
INT: [0-9]+;
SEP: ';' ;
WS: [\t\r\n]+ ->skip;
ERR: [а-я][А-Я]+ ->skip;
VAR:[a-z];
DEG: '^';
MUL:  '*';
DIV: '/';
SIN: 'SIN';
COS: 'COS';
ADD: '+';
SUB: '-';

prog: expr           #OneLineProg
      |prog SEP prog EOF? # MultlineProg
;
expr:expr op=DEG expr #deg 
    |  expr op=(SIN|COS) expr #SinCos
    |expr op=(MUL|DIV) expr #MulDiv
    | expr op=(ADD|SUB) expr #AddSub
    | INT                    #int  
    | VAR                    #var   
    | '(' expr ')'           #parens
    ;